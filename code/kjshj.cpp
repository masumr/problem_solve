#include<bits/stdc++.h>
using namespace std;
int main()
{
long int i,j,n,max_length,length,p;
i=p=j=n=0;
length=1;
max_length=1;
while(scanf("%ld %ld",&i,&j)!=EOF)
{
p=i;
for(;i<=j;++i)
{
n=i;
for(;n!=1;)
{
if(!(n%2==0)) {n=3*n+1;length+=1;}
else {n/=2;length+=1;}
}
if (length>max_length) {max_length=length;length=1;}
else length=1;
}
printf("%ld %ld %ld\n",p,j,max_length);
i=p=j=max_length=0;
}
return 0;
}
