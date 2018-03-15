#include <iostream>
#include <list>
/*
        2018年3月15日23:24:04  list顺序容器的各种顺序的遍历操作
*/
using namespace std;

int main(int argc, char *argv[])
{
    list<int> listMy = {1, 2, 3, 4, 5};

    list<int>::iterator itr;

    for(itr = listMy.begin(); itr != listMy.end(); ++itr)
    {
        cout<<*itr<<endl;
    }
    cout<<"=============="<<endl;
    list<int>::reverse_iterator itrRver;
    for(itrRver = listMy.rbegin(); itrRver != listMy.rend(); itrRver++)
    {
        cout<<*itrRver<<endl;
    }
    cout<<"=============="<<endl;
    list<int>::const_reverse_iterator itrCR;
    for(itrCR = listMy.crbegin(); itrCR != listMy.crend(); itrCR++)
    {
        cout<<*itrCR<<endl;
    }

    //可用auto来修饰初始量Iterator

    return 0;
}
