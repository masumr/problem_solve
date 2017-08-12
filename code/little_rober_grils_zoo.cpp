#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,n,t;
    cin>>t;
    int a[t+3];
    for(int i=0;i<t;i++)
        cin>>a[i];
    for(i=0;i<t;i++)
    {
        for(j=i-1;j>=0;j--)
        {
            if(a[j+1]<a[j])
            {
                swap(a[i],a[j]);
                cout<<j+1<<" "<<j+2<<endl;
            }
        }
    }
}
