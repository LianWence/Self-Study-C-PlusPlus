#include <iostream>
#include <vector>

using namespace std;
//迭代器失效的问题
int main(int argc, char *argv[])
{
    vector<int> vi = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    vector<int>::iterator itr;

    for(itr = vi.begin(); itr != vi.end();)
    {
        if((*itr) % 2 == 0)
        {
            itr = vi.erase(itr);
            continue;
        }
        cout<<*itr<<endl;
        ++itr;
    }

    return 0;
}
