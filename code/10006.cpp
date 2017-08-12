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
    while(cin>>a)
    {
        if(a==0)
            break;
        if(a%2==0)
            cout<<a<<" is normal."<<endl;
        else{
            b=a;
            c=0;
            count=0;
            sum=1;
            for(j=3;j<=sqrt(b);j++)
            {
                if(b%j==0)
                {
                    if(isprime[j]==false){
                        sum*=j;
                    }
                }
            }
            if(sum==a)
                printf("The number %d is a Carmichael number.\n",a);
            else
                printf("%d is normal.\n",a);
        }
    }
}

