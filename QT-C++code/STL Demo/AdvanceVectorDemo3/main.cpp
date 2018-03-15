#include <iostream>
#include <vector>
#include <string>

using namespace std;

class A
{
public:
    A()
    {
        cout<<"无参构造:"<<this<<endl;
    }
    A(int _data)
        :_data(_data)
    {
        cout<<"有参构造:"<<endl;
    }

    ~A()
    {
        cout<<"析构器:"<<this<<endl;
    }
    const A& operator= (const A & another) const
    {
        cout<<"拷贝赋值:"<<this<<" from "<<&another<<endl;
        return another;
    }
    A(const A & another)
    {
        cout<<"拷贝构造"<<this<<" from "<< &another<<endl;
    }
private:
    int _data;
};

int main(int argc, char *argv[])
{
    vector<A> vi;
    A a;
    vi.push_back(a);
    vi.push_back(a);
    vi.push_back(a);
    cout<<"============"<<endl;

    vi.insert(vi.begin(), A());

    return 0;
}
