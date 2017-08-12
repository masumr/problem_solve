#include<bits/stdc++.h>
using namespace std;
int binary(int n)
{
    int count=0;
    while(n)
    {
        if(n%2==1)
            count++;
        n=n/2;
    }
    return count;
}
int decimal(int m)
{
    int k=0,sum=0,z;
    while(m)
    {
        z=m%10;
        sum+=z*pow(16,k);
        k++;
        m=m/10;
    }
    return sum;
}
int main()
{
    int a;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        int x=binary(a);
        int y=binary(decimal(a));
        cout<<x<<" "<<y<<endl;
    }
}
