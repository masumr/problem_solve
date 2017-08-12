#include<bits/stdc++.h>
using namespace std;
int divide_conqure_fibbinchi(int n)
{
    int h=1,i=1,j=0,k=0,t;
    while(n>0)
    {
        if(n%2==1)
        {
            t=j*h;
            j=(h*i+j*k+t);
            i=i*k+t;
        }
        t=h*h;
        h=2*k*h+t;
        k=k*k+t;
        n=n/2;
    }
    return j;
}
int main()
{
    int a,l;
    while(cin>>a){

    }
}
