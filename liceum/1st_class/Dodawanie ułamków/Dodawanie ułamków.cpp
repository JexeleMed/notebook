//Jakub Majer 1F
//Dodawanie u³amków
#include <iostream>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
using namespace std;


int NWD(int m2, int m1)
{
	if(m1!=0)
		return NWD(m1,m2%m1);
		
	return m2;
}

int NWW(int m2, int m1)
{
	return m2/NWD(m1,m2)*m1;
}
struct ulamki
{
int l1;
int m1;
int l2;
int m2;	
};




int odejmowanie(int ulamki.m2, int ulamki.m1, ulamki.int l1, ulamki.int l2)
{
	ulamki.m1 = m1*m2;
	ulamki.l1 = l1*m2;
	ulamki.m2 = m2*m1;
	ulamki.l2 = l2*m1;
	licznik= ulamki.l1-ulamki.l2;
	mianownik=ulamki.m2;

}

 
int main()
{
	
	setlocale(LC_CTYPE, "Polish");
	unsigned short poz;
	int l1,l2,m1,m2, licznik, mianownik=0;
	for(;;)
	{
		system("CLS");
		cout<<"1- Dodawanie"<<endl;
		cout<<"2- Dodawanie"<<endl;
		cout<<"3- Dodawanie"<<endl;
		cout<<"4- Dodawanie"<<endl;
		cout<<"5- KONIEC "<<endl;
		cin>> poz;
	
	
		switch(poz)
		{
			case 1:
				{	
					cout<<"Pierwszy u³amek"<<endl<<"Podaj licznik: ";
					cin>>l1;	
					cout<<"Podaj mianownik: ";
					cin>>m1;
					cout<<"Drugi u³amek"<<endl<<"Podaj licznik: ";
					cin>>l2;
					cout<<"Podaj mianownik: ";
					cin>>m2;
	
					mianownik=NWW(m1, m2);
					licznik= mianownik/m1*l1 + mianownik/m2*l2;
	
					cout<<l1<<"/"<<m1<<" + "<<l2<<"/"<<m2<<" = "<<licznik<<"/"<<mianownik<<endl;
					Sleep(5000);
					break;
				}
			
			case 2:
				{
					cout<<"Pierwszy u³amek"<<endl<<"Podaj licznik: ";
					cin>>ulamki.l1;	
					cout<<"Podaj mianownik: ";
					cin>>ulamki.m1;
					cout<<"Drugi u³amek"<<endl<<"Podaj licznik: ";
					cin>>ulamki.l2;
					cout<<"Podaj mianownik: ";
					cin>>ulamki.m2;				
					cout<<ulamki.l1<<"/"<<ulamki.m1<<" - "<<ulamki.l2<<"/"<<ulamki.m2<<" = ";
					odejmowanie()
					cout<<licznik<<"/"<<mianownik<<endl;
				}
			case 5:
				{
					cout <<"WYCHODZISZ";
					return 0;
				}
		}
	
	}
	
}
