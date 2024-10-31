#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


int main()
{
	fstream plik;
	plik.open("mecz.txt");
	
	string tekst;
	getline(plik, tekst);
	plik.close();
	tekst.erase(0,3);
	int licznik = 0;
	
	for (int i=1; i<tekst.length(); i++)
		{
			if(tekst[i] != tekst[i-1])
				{
					licznik++;
				}
		}
		
	cout<< "Zadanie 1:" << endl;
	cout << licznik<<endl;
	cout << "_______________________________________"<<endl;
	int pointsA=0;
	int pointsB=0;	
	cout << "Zadanie 2: "<< endl;
	for (int i=0; i<tekst.length(); i++)
		{
			if(tekst[i]=='A')
				pointsA++;
			else if (tekst[i]=='B')
				pointsB++;
				
			if(pointsA>=1000 and pointsA-pointsB>=3)
			{
				cout << "Team A wins"<<endl;
				cout << "Score A - B: "<< pointsA << " - " << pointsB<<endl; 
				break;
			}
			else if(pointsB>=1000  and pointsB-pointsA>=3)
			{
				cout << "Team A wins"<<endl;
				cout << "Score A - B: "<< pointsA << " - " << pointsB<< endl; 
				break;
			}
			else 
				continue;
		}
	cout << "_______________________________________"<<endl;
	int passaA=0;
	int passaB=0;
	licznik=0;
	int pomoc=0;
	int longestA=0;
	int longestB=0;

	for(int i=0; i < tekst.length(); i++)
		{
			if(tekst[i]=='A')
				licznik++;
			if(licznik==10)
				passaA++;
				
			if(tekst[i]!='A')
				{
					if(licznik>longestA)
						longestA=licznik;
					
					licznik=0;
				}
				
		}

	for(int i=0; i < tekst.length(); i++)
		{
			if(tekst[i]=='B')
				licznik++;
			if(licznik==10)
				passaB++;
				
			if(tekst[i]!='B')
				{
					if(licznik>longestB)
						longestB=licznik;
					
					licznik=0;
				}
		}

	
	cout << "Zadanie 3: "<<endl;	
	if(passaA+passaA == 2)
		cout<< "Passy razem: "<< passaA+passaB<<endl;
	else
		cout<< "Passy razem: "<< passaA+passaB-1<<endl;

	cout << "Najdluzsza passa nalezy do druzyny: ";

	if(longestA>longestB)
		cout << "A i wynosi: "<<longestA;
	else if(longestB>longestA)
		cout<<"B i wynosi: "<<longestB;	


	
	return 0;
	
}
