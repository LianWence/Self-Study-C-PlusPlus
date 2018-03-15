#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vi;
     //先指定初始容量
//    vi.reserve(16);

    for(int i = 0; i < 10; i++)
    {
        vi.push_back(i);
        cout<<"size:"<<vi.size()<<endl;
        cout<<"capacity:"<<vi.capacity()<<endl;

    }
    vi.shrink_to_fit();
    cout<<"size:"<<vi.size()<<endl;
    cout<<"capacity:"<<vi.capacity()<<endl;
    return 0;
}
