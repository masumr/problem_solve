#include<stdio.h>
#include<math.h>
int main()
{   float o,j;
    long long int n,x,t,i,k,m,l,ca=1;
    int s[10000000];
    scanf("%lld",&t);
    for(i=0;i<t;i++){
        scanf("%lld",&n);
        x=n/2;
        m=0;
        for(;x<n;x++){
            j=n-x;
            j=sqrt(j);
                o=x/j;
                k=o;
                if(k==o&&k>0){
                    s[m]=x;
                    m++;
                }
                else
                    continue;

        }
        printf("Case %d: ",ca);
        for(l=0;l<m;l++){
            if(l==m-1)
                printf("%d",s[l]);
            else
                printf("%d ",s[l]);
        }
        printf("\n");
        ca++;
    }
    return 0;
}
