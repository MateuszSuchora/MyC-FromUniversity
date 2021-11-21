#include <iostream>
#include <string>
#include <cmath>
using namespace std;
class Punkt{
private:
    double x;
    double y;
public:
    Punkt(){
        x=0;
        y=0;
    }
    Punkt(double xa, double ya){
        x=xa;
        y=ya;
    }
    void wyswietl(){
        cout<<'('<<x<<','<<y<<')';
    }
    void Setx(double a){
        x=a;
    }
    void Sety(double a){
        y=a;
    }
    double Getx(){
        return x;
    }
    double Gety(){
        return y;
    }
    double odleglosc_od_punktu(double xa, double ya){
        return sqrt((xa-x)*(xa-x)+(ya-y)*(ya-y));
    }
    double odleglosc_od_punktu(Punkt P1){
        return sqrt((P1.x-x)*(P1.x-x)+(P1.y-y)*(P1.y-y));
    }
    double odleglosc_od_0(){
        return sqrt((x*x)+(y*y));
    }
    void przesun_o_wektor(double a, double b){
        x=x+a;
        y=y+b;
    }
    void obroc(double a){
        double b=x;
        double c=y;
        x=b*cos(a)-c*sin(a);
        y=b*sin(a)-c*cos(a);
    }
    void lezy_w_cwiartce(){
        if(x==0||y==0){
            cout<<"Na osi";
        }
        else{
            if(x>0){
                if(y>0){
                    cout<<"I cwiartka";
                }
                else
                    cout<<"III cwiartka";
            }
            else{
                if(x<0){
                    if(y>0){
                        cout<<"II cwiartka";
                    }
                    else
                        cout<<"IV cwiartka";
                }
            }
        }

    }
    bool jest_symetryczny_wzgl_0(Punkt P1){
        if(P1.x==-x&&P1.y==-y)
            return 1;
        else
            return 0;
    }
    Punkt srodek(Punkt P1){
        Punkt P2;
        P2.x=(P1.x+x)/2;
        P2.y=(P1.y+y)/2;
        return(P2);
    }
    void pobierz(){
        double a,b;
        cout<<"Podaj x, a nastepnie y:"<<endl;
        cin>>a>>b;
        x=a;
        y=b;
    }
};
int main(){
    int a,b;
    Punkt P1;
    cout<<"P1:";
    P1.wyswietl();
    Punkt P2(11,-2);
    cout<<endl<<"P2:";
    P2.wyswietl();
    Punkt P3;
    cout<<endl;
    P3.pobierz();
    cout<<endl<<"P3:";
    P3.wyswietl();
    Punkt P4;
    P4.Setx(22);
    P4.Sety(3);
    cout<<endl<<"P4:("<<P4.Getx()<<','<<P4.Gety();
    cout<<')'<<endl<<"Odleglosc punktu P2 od P3 = "<<P2.odleglosc_od_punktu(P3);
    cout<<')'<<endl<<"Odleglosc punktu P3 od (0,0) = "<<P3.odleglosc_od_0();
    P3.przesun_o_wektor(10,-10);
    cout<<')'<<endl<<"Przesuniecie o wektor punktu P3 o wektor (10,-10) = ";
    P3.wyswietl();
    P3.obroc(90);
    cout<<')'<<endl<<"Obrot punktu P3 po przesunieciu o wektor (10,-10) o 90 = ";
    P3.wyswietl();
    cout<<')'<<endl<<"Po ostatnich zmianach P3 lezy w ";
    P3.lezy_w_cwiartce();
    cout<<')'<<endl<<"Czy po ostatnich zmianach P3 jest symetryczny wzgledem P2? :"<<P3.jest_symetryczny_wzgl_0(P2);
    P3.jest_symetryczny_wzgl_0(P2);
    cout<<')'<<endl<<"Srodek po wszystkich zmianach Punktow P3 i P4: ";
    Punkt S=P3.srodek(P4);
    S.wyswietl();
    return 0;

}
