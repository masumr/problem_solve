#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<4;i++)
        cin>>a[i];
    cout<<min_element(a.begin(),a.end())<<endl;
}
