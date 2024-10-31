//std::array
//¿eby zadzia³a³o w DEVIE C++ to w parametry kompilatora trzeba wpisaæ -std=c++11
#include <iostream>
#include <array>
int main()
{
	std::array<int, 14> table{};
	
	for(int i = 1; i<table.size(); ++i)
		{
			table[i] = table.at(i-1) * i;
		}
		
	for(int number : table) // z kazdym obiegiem pêtli ta zmienna number bêdzie kolejnym elementem tablicy
		{
			std::cout<< number <<std::endl;
		}
}
