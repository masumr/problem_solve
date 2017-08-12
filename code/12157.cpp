#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n,a=0,b=0,x;
        scanf("%d",&n);
        while(n--){
            scanf("%d",&x);
            a+=(x/30)+1;
            b+=(x/60)+1;
        }
        a*=10;
        b*=15;
        printf("Case %d: ",++c);
        if(a<b) printf("Mile %d\n",a);
        else if(a>b) printf("Juice %d\n",b);
        else printf("Mice Juice %d\n",a);
    }
}
