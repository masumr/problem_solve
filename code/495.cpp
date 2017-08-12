#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,t,x;
    long long a[100000];
    long long b[10000];
    a[0]=1;
    b[1]=a[0];
    a[1]=1;
    b[2]=a[1];
    int k=3;
    for(i=2;i<=5000;i++)
    {
        a[i]=a[i-1]+a[i-2];
        b[k++]=a[i];
    }
    while(cin>>x)
    {
        cout<<"The Fibonacci number for "<<x<<" is "<<b[x]<<endl;
    }

}
