//Jakub Majer 2F
#include <iostream>
#include <time.h>
#include <windows.h>
#include <stdlib.h> 

using namespace std;

int horner(int wsp[],int st, int x) //rekurencja
{
	if(st==0)
		return wsp[0];
	
	return x*horner(wsp,st-1,x)+wsp[st];
}




int main()
{
	setlocale(LC_CTYPE, "Polish");
	unsigned short poz;
	
	int *wspolczynniki;
	int stopien, argument;
	int wsp[0];
	int st;
	int x;
	
		
for(;;){
	Sleep(1000);
	system("CLS");
	cout<<"1- Metoda iteracyjna"<<endl;
	cout<<"2- Metoda rekurencyjna"<<endl;
	cout<<"3- Wyjœcie"<<endl;
	cout<<"Podaj nr pozycji menu: ";
	cin>>poz;
}

	switch(poz)
	{
		case 1:
			{
				int wynik = wsp[0];

				for(int i=1;i<=st;i++)
				wynik = wynik*x + wsp[i];
	
				return wynik;

				for(int i=1;i<=st;i++)
				wynik = wynik*x + wsp[i];
	
				return wynik;
			}
		case 2:
			{
				cout<<"Podaj stopieñ wielomianu: ";
				cin>>stopien;
	
				wspolczynniki = new int [stopien+1];
	
				//wczytanie wspó³czynników
				for(int i=0;i<=stopien;i++)
					{
						cout<<"Podaj wspó³czynnik stoj¹cy przy potêdze "<<stopien-i<<": ";
						cin>>wspolczynniki[i];
					}
				
				cout<<"Podaj argument: ";
				cin>>argument;
	
				cout<<"W( "<<argument<<" ) = "<<horner(wspolczynniki,stopien,argument)<<endl;
	
				delete [] wspolczynniki;

			}
		case 3:
			{
				cout<<"Wychodzê"<<endl;
				exit(0);
				break;
			}
		default:
			cout<<"Nie ma takiej pozycji";
	}
}
		

