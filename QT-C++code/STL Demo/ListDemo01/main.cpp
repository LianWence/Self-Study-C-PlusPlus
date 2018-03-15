#include <iostream>
#include <list>
using namespace std;

class A
{
public:
    A()
    {
        cout<<"构造器:"<<this<<endl;
    }
    A(int data)
        :_data(data)
    {
        cout<<"有参构造器:"<<this<<endl;
    }

    ~A()
    {
        cout<<"析构器:"<<this<<endl;
    }
    A(const A & another)
    {
        this->_data = another._data;
        cout<<"拷贝构造: "<<this<<" from "<<&another<<endl;
    }
    A & operator=(const  A & another)
    {
        if(this != &another)
            this->_data = another._data;
        cout<<"拷贝赋值:"<<this<< " from "<<&another<<endl;
        return *this;
    }

     friend bool operator ==(const A & another, const A & other)
     {
        if(another._data == other._data)
        {
            return true;
        }
        return false;
     }

private:
    int _data;
};


int main(int argc, char *argv[])
{
    list<A> list1 = {A(1), A(2), A(3), A(4)};
    cout<<"================"<<endl;
    list<A> list2 = {A(1), A(2), A(3), A(4)};
    cout<<"================"<<endl;
    if(list1 == list2)
    {
           cout<<"list1 == list2"<<endl;
    }
    else
    {
           cout<<"list1 !=  list2"<<endl;
    }
    return 0;
}
