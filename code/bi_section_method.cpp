#include<bits/stdc++.h>
using namespace std;
int four_root(int n,int lo,int hi)
{
    int mid=(lo+hi)/2;
    int ans=1;
    for(int i=1;i<=4;i++)
        ans*=mid;
    if(ans==n)
        return mid;
    if(ans>n)
        return four_root(n,lo,mid);
    else
        return four_root(n,mid+1,hi);
}
int main()
{
    int l=0,h=16,value=81;
    cout<<four_root(value,l,h)<<endl;
}
