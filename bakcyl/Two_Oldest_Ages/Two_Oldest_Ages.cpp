#include <vector>
#include <array>
#include <algorithm>
#include <iostream>

using namespace std;


std::array<int, 2> two_oldest_ages(std::vector<int> ages)
{
    sort(ages.begin(), ages.end());
    return {ages[ages.size()-2], ages[ages.size()-1]};
}



int main()
{

    two_oldest_ages({1, 2, 10, 8});

}