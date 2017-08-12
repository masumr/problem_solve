#include<bits/stdc++.h>
using namespace std;
int linar_saerch(int a[],int n,int x)
{
    for(int i=1;i<n;i++)
    {
        if(a[i]==x)
            return i;
    }
    return -1;
}
int main()
{
    int a[]={10,20,30,40,50};
    int x=30;
    int n=sizeof(a)/sizeof(a[0]);
    cout<<x<<"it present at index "<<linar_saerch(a,n,x)<<endl;
}
