#include <iostream>
#include <vector>
#include <string>



std::vector<int> solve(std::vector<std::string>a,std::vector<std::string>b){
    std::vector<int>total;
    int count = 0;
    for(unsigned long n = 0; n < b.size(); n++)
        {
            count = 0;
            for(unsigned long z = 0; z < a.size(); z++)
              {
                  if(a[z] == b[n])
                      {
                        count++;
                      }
              }
          total.push_back(count);
        }

    for(int t : total)
      {

        std::cout << t << "\n";


      }

    return total;
}



int main()
{
std::vector<std::string> VS; //  = {"abc", "abc","xyz","abcd", "cde"};
std::vector<std::string> BS; // = {"abc", "cde", "uap"};

VS.push_back("abc");
VS.push_back("abc");
VS.push_back(" xyz ");
VS.push_back("abc");
VS.push_back("abc");

solve(VS, BS);


}