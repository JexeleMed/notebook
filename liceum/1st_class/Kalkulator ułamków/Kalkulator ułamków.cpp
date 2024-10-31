//Jakub Majer 1F
//Kalkulator u³amków
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
	int l1,l2,m1,m2;
	int licz;
    int mian;
};

int main()
{
	int n;
	setlocale(LC_CTYPE, "Polish");
	unsigned short poz;
	int l1,l2,m1,m2, licznik, mianownik=0;
	for(;;)
	{
		system("CLS");
		cout<<"1- Dodawanie"<<endl;
		cout<<"2- Odejmowanie"<<endl;
		cout<<"3- Mno¿enie"<<endl;
		cout<<"4- Dzielenie"<<endl;
		cout<<"5- KONIEC "<<endl;
		cin>> poz;
	
	
		switch(poz)
		{
			case 1:
				{	
					ulamki dod;
					
					cout<<"Pierwszy u³amek"<<endl<<"Podaj licznik: ";
					cin>>dod.l1;	
					cout<<"Podaj mianownik: ";
					cin>>dod.m1;
					cout<<"Drugi u³amek"<<endl<<"Podaj licznik: ";
					cin>>dod.l2;
					cout<<"Podaj mianownik: ";
					cin>>dod.m2;
	
					dod.mian=NWW(dod.m1, dod.m2);
					dod.licz= dod.mian/dod.m1*dod.l1 + dod.mian/dod.m2*dod.l2;
					
					dod.mian=dod.mian/NWD(dod.licz, dod.mian);
                    dod.licz=dod.licz/NWD(dod.licz, dod.mian);

                    n=NWD(dod.licz, dod.mian);

                    cout<<dod.l1<<"/"<<dod.m1<<" + "<<dod.l2<<"/"<<dod.m2<<" = "<<dod.licz/n<<"/"<<dod.mian/n<<endl;
					Sleep(5000);
					break;
				}
			case 2:
				{
					ulamki ode;
					
					cout<<"Pierwszy u³amek"<<endl<<"Podaj licznik: ";
					cin>>ode.l1;	
					cout<<"Podaj mianownik: ";
					cin>>ode.m1;
					cout<<"Drugi u³amek"<<endl<<"Podaj licznik: ";
					cin>>ode.l2;
					cout<<"Podaj mianownik: ";
					cin>>ode.m2;
	
					ode.mian=NWW(ode.m1, ode.m2);
					ode.licz= ode.mian/ode.m1*ode.l1 - ode.mian/ode.m2*ode.l2;
	
				
					ode.mian=ode.mian/NWD(ode.licz, ode.mian);
                    ode.licz=ode.licz/NWD(ode.licz, ode.mian);

                    n=NWD(ode.licz, ode.mian);

                    cout<<ode.l1<<"/"<<ode.m1<<" - "<<ode.l2<<"/"<<ode.m2<<" = "<<ode.licz/n<<"/"<<ode.mian/n<<endl;
					Sleep(5000);
					break;
				}
			case 3:
				{
					ulamki mno;
					
					cout<<"Pierwszy u³amek"<<endl<<"Podaj licznik: ";
					cin>>mno.l1;	
					cout<<"Podaj mianownik: ";
					cin>>mno.m1;
					cout<<"Drugi u³amek"<<endl<<"Podaj licznik: ";
					cin>>mno.l2;
					cout<<"Podaj mianownik: ";
					cin>>mno.m2;
					
					mno.licz=mno.l1*mno.l2;
					mno.mian=mno.m1*mno.m2;
					
					mno.mian=mno.mian/NWD(mno.licz, mno.mian);
                    mno.licz=mno.licz/NWD(mno.licz, mno.mian);

                    n=NWD(mno.licz, mno.mian);

                    cout<<mno.l1<<"/"<<mno.m1<<" * "<<mno.l2<<"/"<<mno.m2<<" = "<<mno.licz/n<<"/"<<mno.mian/n<<endl;
					Sleep(5000);
					break;
				}
			case 4:
				{
					ulamki dziel;
					
					cout<<"Pierwszy u³amek"<<endl<<"Podaj licznik: ";
					cin>>dziel.l1;	
					cout<<"Podaj mianownik: ";
					cin>>dziel.m1;
					cout<<"Drugi u³amek"<<endl<<"Podaj licznik: ";
					cin>>dziel.l2;
					cout<<"Podaj mianownik: ";
					cin>>dziel.m2;
					
					dziel.licz=dziel.l1*dziel.m2;
					dziel.mian=dziel.m1*dziel.l2;
					
					dziel.mian=dziel.mian/NWD(dziel.licz, dziel.mian);
                    dziel.licz=dziel.licz/NWD(dziel.licz, dziel.mian);

                    n=NWD(dziel.licz, dziel.mian);

                    cout<<dziel.l1<<"/"<<dziel.m1<<" / "<<dziel.l2<<"/"<<dziel.m2<<" = "<<dziel.licz/n<<"/"<<dziel.mian/n<<endl;
					Sleep(5000);
					break;
				}
			case 5:
				{
					cout <<"WYCHODZISZ";
					return 0;
				}
		}
	
	}
	
}
