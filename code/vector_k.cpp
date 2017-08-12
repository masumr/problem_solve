#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int>v1(10);
    cout<<"vector v1: ";
    for(int i=0;i<v1.size();i++)cout<<v1[i]<<" ";
    cout<<endl;

    vector<int>v2(10,-1);
    cout<<"vector v2: ";
    for(int i=0;i<v2.size();i++)cout<<v2[i]<<" ";
    cout<<endl;

    return 0;
}
