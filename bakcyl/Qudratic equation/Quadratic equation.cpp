#include <iostream>
#include <math.h>

int delta(int a, int b, int c)
{

    return b*b-4*a*c;

}



int main()
{
    int a,b,c;
    int ans =1;

while(ans ==1)
{
    std::cout<<"Enter factors: " << std::endl;
    std::cout<<"Enter a: ";
    std::cin>> a;
    std::cout<<"Enter b: ";
    std::cin>> b;
    std::cout<<"Enter c: ";
    std::cin>> c;
    int d = delta(a,b,c);

    if(d==0)
        {
            std::cout << "x = " <<-b / 2*a;
        }
    if(d<0)
        {
            std::cout <<"Contradictory equation";
        }
    if(d>0)
        {
            std::cout<<"x1 = "<< (-b-sqrt(d)/2*a)<<std::endl;
            std::cout<<"x2 = "<< (-b+sqrt(d)/2*a)<<std::endl;
        }
    std::cout<<std::endl;
    std::cout<<"Is this the end? yes - 0/ no - 1";
    std::cin>> ans;
}
    std::cout<<"Exit";
    return 0;

}