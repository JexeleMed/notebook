//Jakub Majer
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int a1,a2,b,c,x,y=0;
int z,p=0; 

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
	  
	int tab[a1][a2];
	for(x=0;x<a2;x++) 
    {
        for(int y=0;y<a1;y++) 
        {
            
            tab[x][y]=rand()%c+b; 
             
        }
    }
	cout<<"Wypelniona tablica: "<<endl;
    for(x=0;x<a2;x++) 
    {
        cout<<"\n";
	    for(y=0;y<a1;y++) 
          {
			
			cout<<tab[x][y]<<"\t";
            
		  }
	}
    cout<<endl;
    cout<<"_________________________________________"<<endl;
    cout<<endl;

	int tab1[a1][a2];
		for(x=0;x<a2;x++) 
    {
        for(y=0;y<a1;y++) 
        {
            
            if(tab[x][y]>10)
            {
            	tab1[x][y]=tab[x][y];
			}
            else 
            {
            	tab1[x][y]=0;
			}
        }
    }

	cout<<"Tablica pozbawiona liczb mniejszych niz 10(oprocz 0): "<<endl;
    for(x=0;x<a2;x++) 
    {
        cout<<"\n";
	    for(y=0;y<a1;y++) 
          {
			
			cout<<tab1[x][y]<<"\t";
            
		  }
	}
    cout<<endl;
    cout<<"_________________________________________"<<endl;
    cout<<endl;

		for(x=0;x<a2;x++) 
    {
        for(y=0;y<a1;y++) 
        {
            
            if(tab1[x][y]!=0)
            {
            	z++;
			}
            
        }
    }

	int tab2[z];
    	for(x=0;x<a2;x++) 
    {
        for(y=0;y<a1;y++) 
        {
            
            if(tab1[x][y]!=0)
            {
            	tab2[p]=tab1[x][y];
            	p++;
			}
            
        }
    }

cout <<"Tablica po pe³nym przesiewie liczb mniejszych od 10:"<<endl<<endl;
for(int p=0;p<z;p++)
	{
		cout<<tab2[p]<<"\t "; 	
	}
    
}

