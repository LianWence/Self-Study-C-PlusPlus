#include <iostream>
#include <vector>
#include <string>

using namespace std;

class A
{
public:
    A()
    {
        cout<<"�޲ι���:"<<this<<endl;
    }
    A(int _data)
        :_data(_data)
    {
        cout<<"�вι���:"<<endl;
    }

    ~A()
    {
        cout<<"������:"<<this<<endl;
    }
    const A& operator= (const A & another) const
    {
        cout<<"������ֵ:"<<this<<" from "<<&another<<endl;
        return another;
    }
    A(const A & another)
    {
        cout<<"��������"<<this<<" from "<< &another<<endl;
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
