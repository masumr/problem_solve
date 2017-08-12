#include<bits/stdc++.h>
using namespace std;
bool isprime[1000044];
void sieve()
{
    int m=1000044;
    isprime[0]=true;
    isprime[1]=true;
    isprime[2]=false;
    for(int i=2;i<=sqrt(m);i++)
    {
        if(isprime[i]==false)
        {
            for(int j=i*i;j<=m;j+=i)
                isprime[j]=true;
        }
    }
}
int main()
{
    int n;
    sieve();
    while(cin>>n)
    {
        if(isprime[n]==false)
        {
            int sum=0,num=n;
            while(n!=0)
            {
                sum=(sum*10)+(n%10);
                n=n/10;
            }
            if(isprime[sum]==false && sum!=num)
                cout<<num<<" is emirp."<<endl;
            else
                cout<<num<<" is prime."<<endl;

        }
        else
            cout<<n<<" is not prime."<<endl;
    }
    return 0;
}
