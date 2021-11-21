    ifstream liczby4("liczby4.txt"); // zdaeklarowano zmienna liczby4 i
    //zwizana ja
    // z plikiem liczby4.txt
    char c;
    int licznik=0;
    while(!liczby4.eof()){ // dopoki nie koniec pliku liczby4 dopoty
                            //wykonuj
            liczby4.get(c); //z pliku liczby4 przeczytaj jeden znak do zmiennej c
            if(isalnum(c)){  // czy zmienna c jest cyfra lub litera
                licznik++;
            }
    }

