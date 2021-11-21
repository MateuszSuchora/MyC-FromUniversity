//Napisz program, w którym zdefiniujesz klasê StudentMatematyki, która ma nastêpuj¹ce pola:
//string Imie;
//string Nazwisko;
//unsign short int Wiek;
//unsignnint NrIndeksu;
//string Specjalnosc;
//unsign short int rok;
//bool CzyZdal;
//oraz metody:
//SetImie, SetNazwisko, itd.
//Get Imie, GetNazwisko, itd.
//Dodatkowo napisz 7 metod public:
//Wyœwietl Imie, Nazwisko, Wiek i Rok;
//SprawdŸ czy student skoñczy³ 25 lat;
//Zwróæ liczbê ile co najmniej student musi studiowaæ ¿eby uzyskaæ stopieñ magistra;
//Sprawdziæ czy student bêdzie móg³ uczyæ informatyki.
//Wyœwietl informacjê, ¿e student zda³ lub nie.
//SprawdŸ czy student jest na studiach licencjackich czy uzupe³niaj¹cych.
//Czy student jest kobiet¹ czy mê¿czyzn¹, zak³adaj¹c, ¿e imie kobiety koñczy siê na a.
#include <iostream>
#include <string>
using namespace std;
class StudentMatematyki{
    string Imie;
    string Nazwisko;
    unsigned short int Wiek;
    string Specjalnosc;
    unsigned int Nr_indeksu;
    unsigned short int Rok_s;
    bool Czy_zdal;
public:
    void SetImie(string a){
        Imie=a;
    }
    void SetNazwisko(string a){
        Nazwisko=a;
    }
    void SetSpecjalmosc(string a){
        Specjalnosc=a;
    }
    void SetWiek(unsigned short int a){
        Wiek=a;
    }
    void SetNr_indeksu(unsigned int a){
        Nr_indeksu=a;
    }
    void SetRok_s(unsigned short int a){
        Rok_s=a;
    }
    void SetCzy_zdal(bool a){
        Czy_zdal=a;
    }
    string GetImie(){
        return Imie;
    }
     string GetNazwisko(){
        return Nazwisko;
    }
     string GetSpecjamosc(){
        return Specjalnosc;
    }
    unsigned short int GetWiek(){
        return Wiek;
    }
    unsigned int GetNr_indeksu(){
        return Nr_indeksu;
    }
    unsigned short int GetRok_s(){
        return Rok_s;
    }
    bool GetCzy_zdal(){
        return Czy_zdal;
    }
    void Info();
    bool Sprawdzczy25();
    int zwrocilelat();
    bool Czyinf();
    void Czyzdal();
    void LicMag();
    void KobMen();
};
void StudentMatematyki::Info(){
    cout<<"Imie:"<<Imie<<' '<<"Nazwisko:"<<Nazwisko<<' '<<"Wiek:"<<Wiek<<' '<<"R. studiow:"<<Rok_s;
}
bool StudentMatematyki::Sprawdzczy25(){
    if(Wiek>=25)
        return 1;
    else
        return 0;
}
int StudentMatematyki::zwrocilelat(){
    return 5-Rok_s;
}
bool StudentMatematyki::Czyinf(){
    if(Specjalnosc=="Nauczycielska"||Specjalnosc=="Informatyczna")
        return 1;
    else
        return 0;
}
void StudentMatematyki::Czyzdal(){
    if(Czy_zdal)
        cout<<"Zdal";
    else
        cout<<"Nie zdal";

}
void StudentMatematyki::LicMag(){
    if(Rok_s==1||Rok_s==2||Rok_s==3)
        cout<<"Licencjat";
    else
        cout<<"Uzupelniajace";
}
void StudentMatematyki::KobMen(){
    int a;
    a=Imie.length();
    if(Imie[a-1]=='a')
        cout<<"Kobieta";
    else
        cout<<"Mezczyzna";
}
int main(){
    StudentMatematyki Mateusz;
    string Imie="Mateusz";
    string Nazwisko="Suchora";
    unsigned short int Wiek=20;
    string Specjalnosc="Nauczycielska";
    unsigned int Nr_indeksu=279234;
    unsigned short int Rok_s=2;
    bool Czy_zdal=1;
    Mateusz.SetImie(Imie);
    Mateusz.SetNazwisko(Nazwisko);
    Mateusz.SetSpecjalmosc(Specjalnosc);
    Mateusz.SetWiek(Wiek);
    Mateusz.SetNr_indeksu(Nr_indeksu);
    Mateusz.SetRok_s(Rok_s);
    Mateusz.SetCzy_zdal(Czy_zdal);
    Mateusz.Info();
    cout<<endl;
    cout<<"Czy 25:"<<Mateusz.Sprawdzczy25();
    cout<<endl;
    cout<<"Ile lat:"<<Mateusz.zwrocilelat();
    cout<<endl;
    cout<<"Czy moze uczyc informatyke:"<<Mateusz.Czyinf();
    cout<<endl;
    Mateusz.Czyzdal();
    cout<<endl;
    Mateusz.LicMag();
    cout<<endl;
    Mateusz.KobMen();
    return 0;
}
