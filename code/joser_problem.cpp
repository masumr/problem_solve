#include<bits/stdc++.h>
using namespace std;
int josef_al(int s,int n)
{
    if(s==0)
        return 1;
    return (josef_al(s-1,n)+n-1)%s+1;
}
int main()
{
    int n,s;
    cin>>n>>s;
    cout<<josef_al(n,s)<<endl;
}
