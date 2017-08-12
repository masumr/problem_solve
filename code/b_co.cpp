#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
map<int,int>mp;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    int count1=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            ll sum=a[i]+a[j];
            if(sum==1 || sum==2 || sum%4==0)
                count++;
        }
    }
    cout<<count<<endl;
}
