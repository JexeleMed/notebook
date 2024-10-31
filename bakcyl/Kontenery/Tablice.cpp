//Tablice
#include <iostream>
#include <string>

int main()
{
	int tab1[5]={2137,69,334,42,53};
	std::string tab2[5]={"kot","pies","jablko","wisnia","orzel"}; // przy stringu potrzebne ""
	for(int i=0; i<5; i++)
	{
	std::cout<<tab1[i]<<std::endl;
	std::cout<<tab2[i]<<std::endl;
	}
}
