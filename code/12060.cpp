#include<bits/stdc++.h>
using namespace std;
int gcd(int a , int b){
    return (b==0)?a:gcd(b,a%b);
}
int count (int y){
    int cnt =0;
    while(y){
        y=y/10;
        cnt++;
    }
    return cnt;
}
int main(){
    int n,m,b=1,c,d,i,j,k,l,x,x1,x2,x3,x4,x5,x6,x7,x8,x9,sum,up,down;
    while(scanf("%d",&n)==1 and n!=0){
        sum =0;
        for(i=0;i<n;i++){
            scanf("%d",&x);
            sum+=x;
        }
        printf("Case %d:\n",b++);
        x1 = sum / n;
        if(x1*n==sum)
        {
            if(x1<0)
            printf("- %d\n",-1*x1);
            else printf("%d\n",x1);
        }

        else
        {
            x2 = sum - (x1*n);
            if(x2<0)
            x3 = gcd(-1*x2,n);
            else x3 = gcd(x2,n);
            up = x2/x3;
            down = n / x3;
            x4 = count(up);
            x5 = count(down);
            x6 = count(x1);
            if(x1 >0)
            {
                for(int u =0;u<(x5+x6)-x4;u++)
                printf(" ");
                printf("%d",up);
                printf("\n");
                printf("%d",x1);
                for(k=0;k<x5;k++)
                printf("-");
                printf("\n");
                for(l=0;l<x6;l++)
                printf(" ");
                printf("%d",down);
                printf("\n");
            }

            if(x1<0)
            {

                for(int u =0;u<(x5+x6)-x4+2;u++)
                printf(" ");
                printf("%d",-1*up);
                printf("\n");
                printf("- %d",-1*x1);
                for(k=0;k<x5;k++)
                printf("-");
                printf("\n");
                for(l=0;l<x6+2;l++)
                printf(" ");
                printf("%d",down);
                printf("\n");
            }

            if(x1==0)
            {
                if(x2<0)
                {
                    for(int u =0;u<(x5+x6)-x4+2;u++)
                    printf(" ");
                    printf("%d",-1*up);
                    printf("\n");
                    printf("- ");
                    for(k=0;k<x5;k++)
                    printf("-");
                    printf("\n");
                    for(l=0;l<x6+2;l++)
                    printf(" ");
                    printf("%d",down);
                    printf("\n");
                }
                else if(x2>0)
                {
                    for(int u =0;u<(x5+x6)-x4;u++)
                    printf(" ");
                    printf("%d",up);
                    printf("\n");
                    for(k=0;k<x5;k++)
                    printf("-");
                    printf("\n");
                    for(l=0;l<x6;l++)
                    printf(" ");
                    printf("%d",down);
                    printf("\n");
                }
            }

        }
    }
}
