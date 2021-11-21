#include <iostream>
#include <Konto.h>
#include "KontoLimitowane.h"
using namespace std;
//13
int main()
{
    int zmienna,warunek=0;
    int wyb;
    string i1,i2,n1,n2;
    double s1,s2,m1,m2,l1,l2;
    double kwota;
    cout<<"Podaj Imie, Nazwisko, saldo, maxymalny debet i limit 1 osoby:"<<endl;
    cin>>i1>>n1>>s1>>m1>>l1;
    cout<<endl<<"Podaj Imie, Nazwisko, saldo, maxymalny debet i limit 2 osoby:"<<endl;
    cin>>i2>>n2>>s2>>m2>>l2;
    KontoLimitowane K1(i1,n1,s1,m1,l1);
    KontoLimitowane K2(i2,n2,s2,m2,l2);

while(warunek==0){
    cout<<endl<<"Wybierz dzialanie (domyslnie opcja nr 4.)"<<endl;
    cout<<"1. wplata na wybrane konto,"<<endl;
    cout<<"2. wyplata z wybranego konta,"<<endl;
    cout<<"3. przelew z jednego konta na drugie,"<<endl;
    cout<<"4. sprawdzenie salda wybranego konta,"<<endl;
    cout<<"5. zmiana wysokosci maksymalnego debetu na wybranym koncie,"<<endl;
    cout<<"6. koniec pracy programu,"<<endl;
    cin>>zmienna;
    switch( zmienna )
    {
    case 1:
        cout<<"Wybierz konto wcisnij:"<<endl<<"1. Pierwsze konto"<<endl<<"2. Drugie konto"<<endl;
        cin>>wyb;
        switch(wyb){
        case 1:
            cout<<"Podaj wartosc wplaty:";
            cin>>kwota;
            K1.Setsaldo(K1.Getsaldo()+kwota);
        break;
        case 2:
            cout<<"Podaj wartosc wplaty:";
            cin>>kwota;
            K2.Setsaldo(K2.Getsaldo()+kwota);
        break;
    }
    break;
    case 2:
        cout<<"Wybierz konto wcisnij:"<<endl<<"1. Pierwsze konto"<<endl<<"2. Drugie konto"<<endl;
        cin>>wyb;
        switch(wyb){
        case 1:
            cout<<"Podaj wartosc wyplaty:";
            cin>>kwota;
            K1.wyplac(kwota);
        break;
        case 2:
            cout<<"Podaj wartosc wyplaty:";
            cin>>kwota;
            K2.wyplac(kwota);
        break;
        }
    break;
    case 3:
        cout<<"Z ktorego na ktore"<<endl<<"wybierz 1 jezeli z pierwszego na 2"<<endl<<"wybierz 2 jezeli z drugiego na pierwsze."<<endl;
        cin>>wyb;
        switch(wyb){
            case 1:
                cout<<"Podaj wartosc kwoty do przelewu:";
                cin>>kwota;
                K1.przelej(kwota,K2);
            break;
            case 2:
                cout<<"Podaj wartosc kwoty do przelewu:";
                cin>>kwota;
                K2.przelej(kwota,K1);
            break;
        }
    break;
    case 4:
        cout<<"Wybierz konto wcisnij:"<<endl<<"1. Pierwsze konto"<<endl<<"2. Drugie konto"<<endl;
        cin>>wyb;
        switch(wyb){
            case 1:
                cout<<"Obecne saldo wynosi:"<<K1.Getsaldo()<<endl;
            break;
            case 2:
                cout<<"Obecne saldo wynosi:"<<K2.Getsaldo()<<endl;
            break;
        }
    break;
    case 5:
        cout<<"Wybierz konto wcisnij:"<<endl<<"1. Pierwsze konto"<<endl<<"2. Drugie konto"<<endl;
        cin>>wyb;
        double deb;
        switch(wyb){
            case 1:
                cout<<"Podaj nowy debet maxymalny";
                cin>>deb;
                K1.ustaw_max_debet(deb);
                cout<<"Obecny maxymalny debet wynosi:"<<K1.Getmax_debet()<<endl;
            break;
            case 2:
                cout<<"Podaj nowy debet maxymalny";
                cin>>deb;
                K2.ustaw_max_debet(deb);
                cout<<"Obecny maxymalny debet wynosi:"<<K2.Getmax_debet()<<endl;
            break;
        }
    break;
    case 6:
        cout<<"Koniec programu dziekujemy za wybranie naszych uslug."<<endl;
        warunek=1;
    break;
    default:
        cout<<"Wybierz konto wcisnij:"<<endl<<"1. Pierwsze konto"<<endl<<"2. Drugie konto";
        cin>>wyb;
        switch(wyb){
            case 1:
                cout<<"Obecne saldo wynosi:"<<K1.Getsaldo()<<endl;
            break;
            case 2:
                cout<<"Obecne saldo wynosi:"<<K2.Getsaldo()<<endl;
            break;
    break;
    }
    }
}
return 0;
}
