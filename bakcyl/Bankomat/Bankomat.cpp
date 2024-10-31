//Kuba Majer
#include <iostream>


using namespace std;


int main()
{
	int pin;
	int stan = 250;
	int op,kwota,op2;
	cout<<"Podaj kod PIN: ";
	cin>>pin;
	
	if(pin == 1234)
		{
			cout<<"Stan konta: "<<stan<<"PLN"<<endl;
			cout<<"1 - wyplata, 2 - wplata"<<endl;
			cin>>op;
				if(op==1) //wyplata
					{
						cout<<"Ile chcesz wyplacic? "; 
						cin>>kwota;
						if(kwota>stan)
							{
								cout<<"Za malo srodkow na koncie";
								return 0;
							}
						else
							{
								cout<<"Wyp³acono pomyslnie"<<endl;
								cout<<"Potrzebujesz potwierdzenia? 1-tak, 2-nie"<<endl;
								cin>>op2;
								if(op2==1)//potwierdzenie
									{
										cout<<"Stan konta po transakcji: "<< stan-kwota<<"PLN";
										return 0;
									}
								else
									{
										return 0;
									}
							}
					}
				if(op==2) //wplata
					{
						cout<<"Ile chcesz wplacic? ";
						cin>>kwota;
						cout<<"Potrzebujesz potwierdzenia? 1-tak, 2-nie"<<endl;
						cin>>op2;
						if(op2==1)//potwierdzenie
							{
								cout<<"Stan konta po transakcji: "<< stan+kwota<<"PLN";
								return 0;
							}
						else
							{
								return 0;
							}
					}
				
				
				else
					{
						cout<<"Nie ma takiej opcji";
						return 0;
					}
			}
	
	else 
	{
		cout<<"PIN niepoprawny";
		return 0;
	}
}
