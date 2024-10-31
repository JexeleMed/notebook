#include <vector>


std::vector<int> solve(std::vector<int> array) {
    std::vector<int> output;
    for(int i = 0; i < array.size(); i++)
        {
            bool dominant = true;
            for(int n=i+1; n < array.size(); n++)
                {

                    if(array[i] <= array[n]) dominant = false;

                }
            if(dominant) output.push_back(array[i]);
        }
    return output;
}



int main()
{



}