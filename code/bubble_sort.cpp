#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10],i,t;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(i=1;i<t;i++)
    {
        for(int j=0;j<t-i;j++)
        {
           if(a[j]>a[j+1])
                swap(a[j],a[j+1]);
        }
    }
    for(i=0;i<t;i++)
        cout<<a[i]<<"\t";
}
