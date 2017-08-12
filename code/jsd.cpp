#include<stdio.h>
#include<math.h>
char Array[5000000];
int prime[200000];

void primes()
{
   int i,j,sN;
   sN = sqrt(5000000);
   for(i=2;i<=5000000;i++)
   {
      Array[i]='P';
   }
   for(i=2;i<sN;i++)
   {
      if(Array[i]=='P')
      {
         for(j=i*i;j<=5000000;j+=i )
         {
            Array[j]='C';
         }
      }
   }
}
int factor(int n)
{
   int sum,mul,i;
   sum=0;mul=1;
   if(n%2==0)
   {
      sum+=2;
   }
   for(i=3;i<=n;i+=2)
   {
      if(Array[i]=='P'&&n%i==0)
      {
         sum+=i;
      }
   }
   return sum;
}

main()
{
   int i,a,m,n,count;
   primes();
   //freopen("11408.in","rt",stdin);
   while(scanf("%d %d",&n,&m)==2)
   {
      if(n==0)
         break;
      count=0;
      for(i=n;i<=m;i++)
      {
         a=factor(i);
         if(Array[a]=='P')
            count++;
      }
      printf("%d\n",count);
      count=0;
   }
}

