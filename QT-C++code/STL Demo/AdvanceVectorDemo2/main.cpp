#include <iostream>
#include <vector>

using namespace std;

int main(int argc, char *argv[])
{
    vector<int> vi = {1, 2, 3, 4, 5};
    cout<<vi.capacity()<<endl;
    vi.resize(10);
    cout<<vi.capacity()<<endl;
    vi.resize(100);
    cout<<vi.capacity()<<endl;
    vi.shrink_to_fit();
    cout<<vi.capacity()<<endl;
    return 0;
}
