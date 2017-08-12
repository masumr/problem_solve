#include<stdio.h>
#include<math.h>
#define MAX 50000


int main()
{
    int k,i,j,sq,c=0,m=1;
    long long int t;
    int prime[MAX+100];
    int p[MAX+100];
    int a[1001];
    sq=sqrt(MAX);
    p[0]=2;
	for(i=3;i<=sq;i+=2){
		if(prime[i]==0)
		{
		    p[m++]=i;
			for(j=i*i;j<=MAX;j+=2*i){
                prime[j]=1;
			}
		}
	}
    while(scanf("%lld",&t)==1){
            if(t<0){t=-t;c++;}
            i=0,j=0;
            while(p[i]<=t){
                while(t%p[i]==0){
                    a[j++]=p[i];
                    t/=p[i];
                }
                i++;
            }
            if(t>1) a[j++]=t;
            if(c) printf("-1 x ");
            for(k=0;k<j;k++){
            printf("%d",a[k]);
            if(k!=j-1)
                printf(" x ");
            }
            printf("\n");
    }
return 0;
}

