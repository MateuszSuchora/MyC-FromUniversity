#include <iostream>

using namespace std;
int main ()
{
	int i, liczba_monet, reszta,
	nominal[] = {20000,10000,5000,2000,1000,500,200,100,50,20,10,5,2,1};

	cout << "Podaj reszte do wydania ";
	cin >> reszta;

	i = 0;
	while (reszta > 0)
	{
		if	(reszta >= nominal[i])
		{
			liczba_monet = reszta / nominal[i];
			reszta = reszta - (nominal[i] * liczba_monet);
			cout << liczba_monet << " x " << nominal[i] << " gr." << endl;
		}
		i++;
	}
}
