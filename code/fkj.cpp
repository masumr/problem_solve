#include<bits/stdc++.h>
using namespace std;
bool isprime[65005];
void sieve()
{
    int m=65005;
    isprime[0]=true;
    isprime[1]=true;
    isprime[2]=false;
    for(int i=2;i<=sqrt(m);i++)
    {
        if(isprime[i]==false)
        {
            for(int j=i*i;j<=m;j+=i)
            {
                isprime[j]=true;
            }
        }
    }
}
int main()
{
    int a,b,i,t[65000],k=0,c,count=0,j,sum=0;
    sieve();
        for(k=3;k<=1000;k++){
            for(j=3;j<=i;j++)
            {
                if(k%j==0)
                {
                    if(isprime[j]==false){
                        sum*=j;
                    }
                }
            }
            if(sum==a)
              cout<<sum<<endl;
        }
}


