//Vector w vectorze
#include <iostream>
#include <vector>


int main()
{
	int n,z;
	std::cout<<"Jaki rozmiar vectora?"<<std::endl;
	std::cin>>n;
	std::cout<<"Czym wypelnic?"<<std::endl;
	std::cin>>z;
	
	std::vector<int> vec(n,z);
	
	for(int number : vec) // pêtla range for, int number - tworzy nowy element, vec wskazuje kontener, z którego pobierzemy zawartoœæ, pêtla zakoñæzy siê w momencie kiedy wszystkie elementy vectora siê wykonaj¹
		{
			std::cout<<number;	
		}	
}
