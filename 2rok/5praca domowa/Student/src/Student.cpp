#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(){}

Student::~Student(){}
Student::Student (string i, string n, char p, int r, string nr):Osoba(i,n,p,r),nr_albumu(nr),rok_studiow(1),typ_studiow('l'){};
Student::Student(string i, string n, char p, int r, string nr, int rs, char t):Osoba(i,n,p,r),nr_albumu(nr),rok_studiow(rs),typ_studiow(t){};

bool Student:: zalicz_rok(){
    if((Getrok_studiow()==1||Getrok_studiow()==2)&&typ_studiow=='l'||Getrok_studiow()==4||
       (Getrok_studiow()==1||Getrok_studiow()==2)&&typ_studiow=='i'||
       (Getrok_studiow()==1)&&typ_studiow=='u'||
       (Getrok_studiow()==1)&&typ_studiow=='d'){
        Setrok_studiow(Getrok_studiow()+1);
        return true;
    }
    else{
        if(Getrok_studiow()==5||(Getrok_studiow()==3&&Gettyp_studiow()=='l')||
           ((Getrok_studiow()==2)&&typ_studiow=='d')||((Getrok_studiow()==3)&&Gettyp_studiow()=='i')
           ||(Getrok_studiow()==2&&Gettyp_studiow()=='u')){
            Setrok_studiow(0);
            return true;
        }
        else
            return false;
    }
}

void Student::info()
{
    //if(Getplec()=='k')
      //  cout<<"Pani "<<Getimie()<<' '<<Getnazwisko();
    //else
     //   cout<<"Pan "<<Getimie()<<' '<<Getnazwisko();
    Osoba::info();
    if(Getrok_studiow()!=0){
    cout<<"  studiuje na "<<Getrok_studiow()<<" roku studiow ";
        if(Gettyp_studiow()=='l')
            cout<<"licencjackich.";
        else{
            if(Gettyp_studiow()=='u')
                cout<<"uzupelniajacych.";
            else{
                if(Gettyp_studiow()=='d')
                    cout<<"doktoranckich.";
                else{
                    if(Gettyp_studiow()=='m')
                        cout<<"magisterskich.";
                    else{
                        if(Gettyp_studiow()=='i')
                            cout<<"inzynierskich.";
                        else
                            cout<<"bledny typ studiow";
                    }
                }
            }
        }
    }
    else{
        cout<<" ukoñczy³/a studia ";
    }


}
