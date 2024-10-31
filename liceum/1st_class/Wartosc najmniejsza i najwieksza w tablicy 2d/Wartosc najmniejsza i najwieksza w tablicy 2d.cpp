//Jakub Majer 1F
//Tablica 2d - maksymalna i minimalna wartoœæ
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int a1,a2,b,c,x,y=0;
int max, min=0; // max - wartoœæ najwiêksza , min - wartoœæ najmniejsza

int main ()
{
	srand( time( NULL ) );
	setlocale( LC_ALL, "" ); 
		cout<<"Podaj wymiary tablicy:"<< endl;
	cout<< "Kolumny: ";
	cin >> a1;
	cout<<"Wiersze: ";
	cin >> a2;
	cout<< "Zakres liczb losowanych:"<< endl;
	cout<<"od: ";
	cin >> b;
	cout<<"do: ";
	cin>> c;
	
/*-------------------------------------------------*/		  
	int tab1[a1][a2];
	for(x=0;x<a2;x++) // wiersze
    {
        for(int y=0;y<a1;y++) // kolumny
        {
            
            tab1[x][y]=rand()%c+b; // przypisanie liczb losowych komórkom w tablicy
             
        }
    }
/*-------------------------------------------------*/
cout<<"Wypelniona tablica: "<<endl;
    for(x=0;x<a2;x++) // wiersze
    {
        cout<<"\n";
	    for(y=0;y<a1;y++) // kolumny
          {
			
			cout<<tab1[x][y]<<"\t";
            
		  }
	}
    cout<<endl;
    cout<<"_________________________________________"<<endl;
    cout<<endl;
/*-------------------------------------------------*/
//Najwiêksza
int max=tab1[0][0];
for(x=1;x<a2;x++) // wiersze
    {
	    for(y=0;y<a1;y++) // kolumny
          {
			
			if(max<tab1[x][y])
			{
				max=tab1[x][y];
			}
            
		  }
	}
/*-----------------------------------------------*/
//Najmniejsza
int min=tab1[0][0];
for(x=1;x<a2;x++) // wiersze
    {
	    for(y=0;y<a1;y++) // kolumny
          {
			
			if(min>tab1[x][y])
			{
				min=tab1[x][y];
			}
            
		  }
	}
/*-----------------------------------------------*/
cout<<"Wartoœæ najwiêksza: "<< max << endl;
cout<<"Wartoœæ najmniejsza: "<< min << endl;
return 0;
}
