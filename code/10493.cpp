#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)&&( n!=0 && m!=0)){
        printf("%d %d ",n,m);
        if(n==1){
            if(m==1)printf("Multiple\n");
            else printf("Impossible\n");
        }
        else{
            if((m-1)%(n-1)!=0)printf("Impossible\n");
            else printf("%d\n",((m-1)/(n-1))+m);
        }
    }
}
