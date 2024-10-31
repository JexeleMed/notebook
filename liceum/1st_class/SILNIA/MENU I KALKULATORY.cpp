// Jakub Majer 1F
// MENU ORAZ KALKULATORY
#include <iostream>
#include <math.h>
#include <windows.h> //Sllep(ms)
#include <stdlib.h> //system("CLS")
using namespace std;
int a,i,z=0;

long long silnia(int n)

	{
		if(n<2)
			{        
				return 1; 
			}
		else
			{
				return n*silnia(n-1); 
			}
	}	


long long silnia2(int n)
   {

		if(n<2)
			{        
				return 1; 
			}
		else
			{
				long int silnia2=1;
   				for(int i=2;i<=n;i++) 
    			silnia2 = silnia2 *i;
    			return silnia2; 
    		}
	}
	
long long fibo1(int n)
	{
    	if(n<3)
        	return 1;
    
    	return fibo1(n-2)+fibo1(n-1);
	}
	    
long long fibo2(int n)
	{
		long long a = 0, b = 0;
  		cout<<b<<" ";
		b++;
    	for(int i=0;i<n-1;i++)
     		{
            cout<<b<<" ";
            b += a; 
            a = b-a; 
     		}     
    	cout<<endl<<"Ten element ci¹gu to:"<<endl<<a;
			
	}
long long euklides1(int a, int b)
	{
if(b!=0)
    	return euklides1(b,a%b);
	
    return a;
	}
     
long long euklides2(int a, int b)
	{
int pom;
    
	while(b!=0)
    {
		pom = b;
		b = a%b;
		a = pom;	
	}
	return a;
	}

long long potegowanie1(long long a, unsigned int n)
	{
		long long w = 1;
	
		while(n>0)
			{
				if (n%2 == 1) //jesli bit jest = 1
				w *= a;
				a*= a;
				n/=2; //skrócenie o jeden bit
			}
		return w;
	}
long long potegowanie2(long long a, unsigned int n)
	{
	if(n==0)
		return 1;
	
	if(n%2 == 1) 
		return a * potegowanie2(a, n - 1);
	
	long long w = potegowanie2(a, n/2); 
	return w * w;
	}
	
	

	
	
int main()
{
	setlocale(LC_CTYPE, "Polish");
	unsigned short poz;
	int a;
	int b;
	int n;

	
//MENU
for(;;)
{
	system("CLS");
	cout<<"1- Oblicz silniê metod¹ rekurencyjn¹"<<endl;
	cout<<"2- Oblicz silniê metod¹ iteracyjn¹ "<<endl;
	cout<<"3- Ci¹g fibbonaciego metod¹ rekurencyjn¹ "<<endl;
	cout<<"4- Ci¹g fibbonaciego metod¹ iteracyjn¹"<<endl;
	cout<<"5- NWD - rekurencja "<<endl;
	cout<<"6- NWD - iteracja"<<endl;
	cout<<"7- Potêgowanie - iteracja"<<endl;
	cout<<"8- Potêgowanie - rekurencja"<<endl;
	cout<<"9- NWW"<<endl;
	cout<<"10- Wyjœcie"<<endl;
	cin>>poz;

	switch(poz)
		{
		case 1:
			{
				cout<<"Podaj liczbê pocz¹tkow¹:"<<endl;
				cin>>n;
				cout<<"Silnia z "<< n <<" wynosi: "<<silnia(n)<< endl;
				Sleep(5000);
				break;
			}
		case 2:
			{
			   	cout<<"Podaj liczbê pocz¹tkow¹:"<<endl;
				cin>>n;
				cout<<"Silnia z "<< n <<" wynosi: "<<silnia2(n)<< endl;
				Sleep(5000);
				break; 
			}
		case 3:
			{
				cout<<"Który element ci¹gu Ciê interesuje:"<<endl;
				cin>>n;
				cout <<"Ci¹g fibbonaciego:"<<endl<<fibo1(n)<<endl;
				Sleep(5000);
				break;
			}
		case 4:
			{
				cout<<"Który element ci¹gu Ciê interesuje:"<<endl;
				cin>>n;
				fibo2(n);			
				Sleep(5000);
				break;	
			}
		case 5:
			{
				cout<<"Podaj liczby do sprawdzenia:"<<endl;
				cout<<"Pierwsza liczba: ";
				cin>>a;
				cout<<endl<<"Druga liczba: ";
				cin>>b;
				cout<<endl<<"NWD ="<<euklides1(a,b)<<endl;
				Sleep(5000);
				break;
			}
		case 6:
			{
			   	cout<<"Podaj liczby do sprawdzenia:"<<endl;
				cout<<"Pierwsza liczba: ";
				cin>>a;
				cout<<"Druga liczba: ";
				cin>>b;
				cout<<endl<<"NWD ="<<euklides2(a,b)<<endl;
				Sleep(5000);
				break;
			}
		case 7:
			{
				cout<<"Podaj podstawê: ";
				cin>>a;
				cout<<"Podaj wyk³adnik: ";
				cin>>n;
				cout<<"Wynik: "<<potegowanie1(a,n)<<endl;
				Sleep(5000);
				break;
			}
		case 8:
			{
			   	cout<<"Podaj podstawê: ";
				cin>>a;
				cout<<"Podaj wyk³adnik: ";
				cin>>n;
				cout<<"Wynik: "<<potegowanie2(a,n)<<endl;
				Sleep(5000);
				break;
			}
		case 9:
			{
				cout<<"Podaj a: "<<endl;
				cin>>a;
				cout<<"Podaj b:"<<endl;
				cin>>b;
				cout<<"NWW("<<a<<", "<<b<<") = "<<a/euklides2(a, b)*b<<endl;
				Sleep(5000);
				break;
			}
		case 10:
			{
				cout<<"Wychodzisz"<<endl;
				exit(0);
				break;
			}
		default:
			{
				cout<<"Nie ma takiej pozycji";
				Sleep(2500);
			}
		}
	
}

}
