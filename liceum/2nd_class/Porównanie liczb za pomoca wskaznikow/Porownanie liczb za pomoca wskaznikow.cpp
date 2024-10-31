//Jakub Majer 2F

#include <iostream>
#include<cstdlib>


using namespace std;

void zamien(int *a, int *b)
{
	int pom = *a;
	*a = *b;
	*b = pom;
}

void sortuj(int *a, int *b, int *c, int *d)
{
	if(*a>*b)
			zamien(a,b);
	if(*a>*c)
			zamien(a,c);
	if(*b>*c)
			zamien(b,c);
	if(*a>*d)
			zamien(a,d);
	if(*b>*d)
			zamien(b,d);
	if(*c>*d)
			zamien(c,d);
}

int main()
{
	int a, b, c, d;
	
	cout<<"Podaj cztery liczby: "<<endl;
	cin>>a>>b>>c>>d;
	
	sortuj(&a,&b,&c,&d);
	
	cout<<"Liczby posortowane: "<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
	
	system("pause");
	return 0;
}
