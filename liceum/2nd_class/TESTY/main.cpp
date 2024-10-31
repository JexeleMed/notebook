#include<graphics.h>
#include<conio.h>
#include<dos.h>
#include<iostream>
using namespace std;
int funkcja(int x)
{
    return 2*x+3; 
}
int przesuniecie1(int p)
{
    return p;
}

main()
{
   int z;
   int x1=-1000, x2=1000,s;
   cout << "Podaj p: ";
   cin>>z;
   int p=przesuniecie1(z);
 
    cout << "Podaj skalê:";
    cin>>s;
    int y1=-funkcja(x1); 
   int y2=-funkcja(x2); 
   int gd = DETECT, gm; 
   initgraph(&gd, &gm, "");
   cout<<"rozmiar okna na x"<<getmaxx()<<endl;
   cout<<"rozmiar okna na y"<<getmaxy()<<endl; 
   setcolor(WHITE); 
   line(getmaxx()/2,0,getmaxx()/2,getmaxy());
   line(0,getmaxy()/2,getmaxx(),getmaxy()/2); 
   setcolor(RED); 
   line(x1*s + getmaxx()/2,y1*s + getmaxy()/2,x2*s + getmaxx()/2,y2*s + getmaxy()/2); 

   getch();
   closegraph(); 
   return 0;
   }
