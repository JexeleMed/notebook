//Jakub Majer 1F
//Sprawdzanie czy liczba jest liczb¹ pierwsz¹
#include<iostream>
using namespace std;




bool czy_pierwsza(long long n)
	{
		if(n<2)
			return false; //gdy liczba jest mniejsza ni¿ 2 to nie jest pierwsz¹
		
		for(long long i=2;i*i<=n;i++)
			if(n%i==0)
				return false; //gdy znajdziemy dzielnik, to dana liczba nie jest pierwsza
		return true;
}


int main()
{
	setlocale(LC_CTYPE, "Polish");
	
	long long n;
	long long x;
	cout<<"Podaj zakres: "<<endl<<"OD: ";
	cin>>n;
	cout<<"DO: ";
	cin>>x;
	cout<<"Liczby pierwsze z zakresu "<<n<<"-"<<x<<" to: ";
	for(x;n<=x;n++)
	{
		if(czy_pierwsza(n)==1)
		cout<<n<<" ";
	}
	
	return 0;
}


	

