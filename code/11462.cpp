#include<cstdio>
using namespace std;
int main(){
    int m,n,x[101],i,j,k,t;
    while(scanf("%d",&n) && n!=0){
        //memset(x,0,sizeof x);
        for(int i=0;i<100;i++) x[i]=0;
        for(i=1; i<=n; i++){
            scanf("%d",&t);
            x[t]++;
        }
        m=0;
        for(int i=0;i<100;i++){
            for(int j=1;j<=x[i];j++){
                printf("%d",i);
                if(m!=n-1)printf(" ");
                else break;
                m++;
            }
        }
        printf("\n");
    }
}

