//Vector w vectorze
#include <iostream>
#include <vector>

int printing(std::vector<int> vect)
{
 for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++)
            std::cout << vec[i][j] << " ";
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<std::vector<int>> vec{ {1, 2, 3}, 
                                       {4, 5, 6}, 
                                       {7, 8, 9} }; 	
     
}