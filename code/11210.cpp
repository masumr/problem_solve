#include<cstdio>
int main(){
    int b,s,x,c=0;
    while(scanf("%d%d",&b,&s) && (b && s)){
        int mn= 0xfffffff;
        for(int i=0;i<b;i++){
            scanf("%d",&x);
            if(mn>x)mn=x;
        }
        for(int i=0;i<s;i++)scanf("%d",&x);
        printf("Case %d: ",++c);
        if(b<=s)printf("0\n");
        else printf("%d %d\n",b-s,mn);
    }
}
