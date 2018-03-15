#include <iostream>
#include <vector>
#include <time.h>
#include <stdio.h>

using namespace std;
//用vector顺序容器构造二维空间
int main(int argc, char *argv[])
{
    //因为内部自动扩容, 所以更灵活
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
