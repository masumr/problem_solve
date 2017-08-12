#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[20]={0};
    int x,count=0;
    while(count<10)
    {
        cin>>x;
        a[x]++;
        count++;
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<a[i];j++)
            cout<<i<<" ";
    }
    cout<<endl;
}
