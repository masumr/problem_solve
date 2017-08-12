#include<bits/stdc++.h>
using namespace std;
int min_1(int *a,int n)
{
    if(n==0)
        return a[n];
    int m=min_1(a,n-1);
    if(m>a[n])
        return a[n];
    else
        return m;
}
int main()
{
    int a[10],b;
    cin>>b;
    for(int i=0;i<b;i++)
        cin>>a[i];
    cout<<min_1(a,b-1)<<endl;
}
