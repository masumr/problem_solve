#include<bits/stdc++.h>
using namespace std;
vector<int>prime;
const int size=65545;
bitset<size>check;
void sieve()
{
  for(int i=2;i<=sqrt(size);i+=2)
  {
    if(check[i]==0)
    {
      for(int j=i*i;j<=size;j+=2*i)
        check[j]=1;
    }
  }
  for(int i=2;i<=size;i++)
    if(check[i]==0)
        prime.push_back(i);
}

int main()
{
   sieve();

   int n,tem;
   int t=0;
   while(scanf("%lld",&n)==1&&n!=0)
   {
   ++t;

      long long int ans=0,s=0;
    tem=n;
      for(int i=0;prime[i]<=sqrt(n);i++)
      {
        long long int a=1;

        if(n%prime[i]==0)++s;
         while(n%prime[i]==0)
         {
           a*=prime[i];
           n=n/prime[i];

         }
      if(a!=1)
        ans+=a;
      }
      if(n!=1)
      {ans+=n;++s;}
      if(s<=1)ans+=1;
      if(tem==1)ans+=1;
   printf("Case %d: %lld\n",t,ans);
   }

return 0;
}
