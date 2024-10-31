#include <list>


using namespace std;



int findDeletedNumber(list<int> startinglist, list<int> mixedlist)
{
    mixedlist.sort();
    list<int> :: iterator it;
    list<int> :: iterator it2;

    it = mixedlist.begin();
    it2 = startinglist.begin();

    for(int i = 0; i < startinglist.size(); i++)
        {   
            if(*it2 != *it)
                {
                    return *it2;
                }
            it++;
            it2++;

        }
    return 0;
}
int main()
{
    findDeletedNumber({1,2,3,4,5,6,7,8,9},{1,5,7,9,4,8,2,3});
    return 0;
}

