//Jakub Majer 2F
#include <iostream>
#include <string>
#include <fstream>
//otworz plik przyklady.txt oraz pary.txt
using namespace std;

bool pierwsza(int n)
{
	int i=2;
	while(i*i <= n && n%i!=0) i++;
	if (i*i>n) return true;
	else return false;
}
int naj(string a,int& p)
{
	int d=0;
	p=0;
	for(int i=0;i<a.size();)
	{
		int j=i+1;
		while(j<a.size() && a[i]==a[j]) j++;
		if (d < j-i)
		{
			d= j-i;
			p=i;
		}
		i=j;
	}
	return d;
}

int suma_p(int n)
{
	if(n==4) return 2;
	int k=3;
	while(k <= n/2 && !(pierwsza(k) && pierwsza(n-k))) k+=2;
	return k;
}
int main()
{
	cout<<"Zadanie 4.1"<<endl;
	ifstream plik("przyklad.txt");
	int liczba[100];
	string slowo[100];
	int n=0;
	while (plik >> liczba[n] >> slowo[n]) n++;
	//zad 4.1
	for (int i=0; i<n; i++)
	if (liczba[i]%2==0)
	{
		int k = suma_p(liczba[i]);
		cout<<liczba[i]<<"\t"<<k<<"\t"<<liczba[i]-k<<endl;
	}
	cout<<"Zadanie 4.2"<<endl;
	//zad 4.2
	for (int i=0;i<n;i++)
	{
		int p;
		int d=naj(slowo[i],p);
		cout<<slowo[i].substr(p, d)<<"\t"<<d<<endl;
	}
	cout<<"Zadanie 4.3"<<endl;
	//zad 4.3
	int m=0;
	while(liczba[m]==slowo[m].size())m++;
	for(int i=m+1; i<n;i++)
	{
		if(liczba[i]==slowo[i].size())
		{
			if(liczba[i]<liczba[m] || (liczba[i]==liczba[m] && slowo[i]< slowo[m]))
				m=i;
		}
	}
	cout<<liczba[m]<<"\t"<<slowo[m]<<endl;
	return 0;
}
