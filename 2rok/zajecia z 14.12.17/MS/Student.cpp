#include<iostream>
#include<fstream>
#include<string>
using namespace std;
int main(){
    string imie, nazwisko;
    int wiek;
    string sciezka;
    cout<<"Podaj sciezke:"<<endl;
    cin>>sciezka;
    ofstream student;
    student.open(sciezka);
    if(!student){//sprawdza czy zmienna poprawnie utworzona
        cout<<"Przykro mi nie udalo sie utworzyc pliku :("<<endl;
        return 1;
    }//endif
    cout<<"Podaj imie nazwisko, wiek:"<<endl;
    cin>>imie>>nazwisko>>wiek;
    student<<"Imie:";
    student<<imie;
    student<<endl;
    student<<"Nazwisko:";
    student<<nazwisko;
    student<<endl;
    student<<"Wiek:";
    student<<wiek;
    student<<endl;
    student.close();
    return 0;
}//endmain
