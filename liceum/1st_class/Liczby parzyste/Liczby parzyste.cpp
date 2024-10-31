//Jakub Majer
#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


int main()
{

    int tab[5][6];
    srand(time(NULL)); // inicjacja generator
    
   
   // przypisanie komórkom w tablicy wartoœci
    for(int a=0;a<5;a++) // wiersze
    {
        for(int b=0;b<6;b++) // kolumny
        {
            
            tab[a][b]=rand()%56+1; // przypisanie komórkom w tablicy wartoœci
             
        }
    }

    // wyœwietlenie ca³ej tablicy
    cout<<"Wypelniona tablica: "<<endl;
    for(int a=0;a<5;a++) // wiersze
    {
        for(int b=0;b<6;b++) // kolumny
            cout<<tab[a][b]<<"\t"; 
            
    cout<<endl;
    }
    cout << "___________________________________" << endl;
	cout << endl;
	cout << "Liczby parzyste zawarte w tablicy:" << endl;
	
	// wybieranie liczb parzystych i ich wyswietlanie  
    	for(int a=0;a<5;a++) // wiersze
    	{
        for(int b=0;b<6;b++) // kolumny
            if(tab[a][b]%2==0)
			{
			cout<<tab[a][b]<< "  ";
     	    }
		}
	return 0;
}
