#include<bits/stdc++.h>
using namespace std;
#define MAXS 1000000
#define MAXSH (MAXS/2)
#define MAXSQ 5000
#define isprime(n) (a[n >> 4] & (1<<(((n)>>1)&7))) //works when n is odd
#define PN 5761455
char a[MAXS/16+2];




int prime[PN],c;


void seive()
{
 int i,j;
 memset(a,255,sizeof(a));
 a[0]=0xFE;
 for(i=1;i<MAXSQ;i++)
  if (a[i>>3]&(1<<(i&7)))
   for(j=i+i+i+1;j<MAXSH;j+=i+i+1)
    a[j>>3]&=~(1<<(j&7));


 prime[c++]=2;
 for(i=3;i<MAXS;i+=2)
 {
  if(isprime(i))
  {
   prime[c++]=i;
               printf("Total prime:%d %d\n",c,prime[c-1]);
  }
 }
}


int main(){
 seive();
 return 0;
}
