#include<iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main()
{
    int a;
    vector<int>v1;
    cout<<"intial value: ";
    for(int i=0;i<10;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    cout<<"minimum the value in this vactro "<<min(v1.begin(),v1.end())<<endl;

}
