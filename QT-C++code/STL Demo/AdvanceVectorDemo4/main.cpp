#include <iostream>
#include <vector>
#include <time.h>
#include <stdio.h>

using namespace std;
//��vector˳�����������ά�ռ�
int main(int argc, char *argv[])
{
    //��Ϊ�ڲ��Զ�����, ���Ը����
    vector<int> vInner;
    vector<vector<int>> vOuter(5, vInner);

    for(int i = 0; i < vOuter.size(); i++)
    {
        for(int j = 0; j < (rand() % 20);  j++)
        {
            vOuter[i].push_back(rand() % 50);
        }
    }

    for(int i = 0; i < vOuter.size(); i++)
    {
        for(int j = 0; j < vOuter[i].size(); j++)
        {
            cout<<"  "<<vOuter[i][j];
        }
        cout<<endl;
    }
    return 0;
}
