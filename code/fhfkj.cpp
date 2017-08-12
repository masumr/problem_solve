#include<bits/stdc++.h>
using namespace std;
const int n=100000;
bool a[n];
int b[n];
int ans1,ans2;
int power(int n,int p)
{
    if(p==1) return n;
    int t=power(n,p/2);
    t*=t;
    if(p&1)
        t*=n;
    return t;
}
void isprime()
{
    a[0]=true;
    a[1]=true;
    a[2]=false;
    int m=sqrt(n)+1;
    for(int i=2;i<=m;i++)
    {
        if(a[i]==false){
            for(int j=i*i;j<=n;j+=i)
                a[j]=true;
        }
    }
    int k=0;
    for(int i=0;i<=n;i++)
    {
        if(a[i]==false)
            b[k++]=i;
    }
}
void nod_sod(int n)
{
    ans1=1;
    ans2=1;
    int ans3=1;
    int k=0;
    while(b[k]<=n)
    {
        int count=1;
        while(n%b[k]==0)
        {
            count++;
            n/=b[k];
        }
        ans1*=count;
        if(count!=1){
            ans3*=(b[k]-1);
            ans2*=(power(b[k],count)-1);
        }
        k++;
    }
    ans2/=ans3;
}
int main(){
    isprime();
    int n;
    while(cin>>n)
    {
        nod_sod(n);
        cout<<ans1<<' '<<ans2<<endl;
    }
}
