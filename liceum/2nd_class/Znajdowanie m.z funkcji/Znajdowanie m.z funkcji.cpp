//Jakub Majer 2F
#include<iostream>
#include<iomanip>
using namespace std;

double f(double x)
{
	//rozpatrujemy wielomian
	return x*(x*(x-7)+12)-4; //rozbijam schematem Hornera
}

double polowienie_przedzialow(double a, double b, double epsilon)
{
	if(f(a)==0.0)return a;
	if(f(b)==0.0)return b;
	
	double srodek = (a+b)/2;
	
	if(b-a <= epsilon) return srodek;
		
	if(f(a)*f(srodek)<0) 
		return polowienie_przedzialow(a, srodek, epsilon);
		
	return polowienie_przedzialow(srodek, b, epsilon);
	
	
}

int main()
{
	setlocale( LC_ALL, "" );
	double a,b,x,y; 
	double epsilon = 0.00001;
	cout<< "Przedzia³"<<endl;
	for(;;)
	{
		cout<<"od: ";
		cin>>a;
		cout<<"do: "<<endl;
		cin>>b;
		cout<<"Znalezione miejsce zerowe wynosi: ";
		cout<<fixed<<setprecision(5)<<polowienie_przedzialow(a, b, epsilon)<<endl<<endl;
		x=polowienie_przedzialow(a, b, epsilon);
		y =x*(x*(x-7)+12)-4;
		cout<<"y = "<<y<<endl;
		cout<<"Nowy przedzia³:"<<endl;
	}
}
