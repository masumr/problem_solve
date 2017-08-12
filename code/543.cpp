#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int size=1000055;
bool a[size];
int b[100000];
int c[size];
int n=size;
void isprime()
{
    int m=sqrt(n)+1;
    a[0]=true;
    a[1]=true;
    a[2]=false;
    for(int i=2;i<=m;i++)
    {
        if(a[i]==false){
            for(int j=i*i;j<=n;j+=i)
                a[j]=true;
        }
    }
    int k=0;
    for(int s=0;s<=n;s++)
    {
        if(a[s]==false)
            b[k++]=s;
    }
    for(int i=0;i<k;i++)
    {
        for(int j=0;j<k;j++)
        {
            ll sum=b[i]+b[j];
            if(sum<=n)
                c[sum]=b[i];
        }
    }
}
int main()
{
    int n;
    memset(c,0,sizeof(c));
    isprime();
    while(cin>>n){
        if(c[n]!=0)
            printf("%d = %d + %d\n",n,c[n],(n-c[n]));
        else
            cout<<"Goldbach's conjecture is wrong."<<endl;
    }
}
