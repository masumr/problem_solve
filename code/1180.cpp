#include<cstdio>
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int p;
        scanf("%d,",&p);
        if( p == 2 || p == 3 || p == 5 || p == 7 || p == 13 || p == 17 || p == 19 )printf("Yes\n") ;
        else printf("No\n");
    }
}
