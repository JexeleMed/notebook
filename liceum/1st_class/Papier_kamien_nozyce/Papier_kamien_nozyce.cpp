#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;
int player, computer, re; // kolejno: gracz, komputer, powtorzenie
int nr = 1; // numer gry



int main()
{
	srand( time( NULL ) ); // inicjacja generatora
	
	
// INPUT
	cout <<"Ile gier chcesz rozegrac? ";
	cin >> re;
for(int i;i<re;i++)
{
	cout<<"Gra numer: "<< nr <<endl;
	cout <<"Papier - 1, kamien - 2, nozyce - 3 ? "<<endl;
	cin >> player;
	computer=rand()%3+1;
	

// OUTPUT
	cout <<"Gracz: ";
	if(player==1)
		{
			cout<< "Papier";
		}
	if(player==2)
		{
			cout << "Kamien";
		}
	if(player==3)
		{
			cout<< "Nozyce";
		}	
	cout<<endl <<"Komputer: ";
	if(computer==1)
		{
			cout<< "Papier";
		}
	if(computer==2)
		{
			cout << "Kamie�";
		}
	if(computer==3)
		{
			cout<< "Nozyce";
		}
		cout<<endl;
		cout<<"Wynik: ";
	
// Cz�� gierkowa	
	if(computer==player) //r�wne
		{
			cout <<"Remis"<< endl;
		}
		else if(player==2) //gracz - kamie�
		{
				if(computer==1)
				{
					cout <<"Przegrales";
				}
				if(computer==3)
				{
					cout <<"Wygrales";
				}
		}
		else if(player==3) //gracz - no�yce
			{
				if(computer==1)
				{
					cout <<"Wygrales";
				}
				if(computer==2)
				{
					cout<< "Przegrales";
				}
			}
		else if(player==1) // gracz - papier
			{
				if(computer==2)
				{
					cout<<"Wygrales";
				}
				if(computer==3)
				{
					cout<<"Przegrales";
				}
			}
			
 	cout<<endl<<"_____________________________"<<endl;
nr++;
}
	cout <<"GAME OVER";	
}

