#include<cstdio>
const int N=1003;
int a[N];
int main(){
    int t;
    while(scanf("%d",&t) && t){
        int k;
        for(int i=0;i<t;i++){
            int x;
            scanf("%d",&x);
            if(x>0)a[k++]=x;
        }
        if(k==0)printf("0\n");
        else{
            for(int i=0;i<k;i++){
                printf("%d",a[i]);
                if(i!=k-1)printf(" ");
            }
            printf("\n");
        }
    }
}
