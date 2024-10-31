#include <iostream>
#include <array>
#include <vector>

int main()
{
	
	std::array<int, 10> numbers{1,2,3,4,5,6,7,8,9,10};
	std::vector<int> vec{};
	
	for(int i=0; i<numbers.size(); ++i)
		{
			if(numbers.at(i)%2 != 0)
				{
					vec.push_back(numbers.at(i));
				}
		}
		
	for(int i=0; i < vec.size(); ++i)
		{
			std::cout << vec.at(i);
		}
	
	return 0;
	
	
	
}
