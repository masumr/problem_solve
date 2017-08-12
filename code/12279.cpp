#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t=0;
    while(scanf("%d",&n)==1 and n!=0){
        int z=0,c=0;
        while(n--){
            int x;
            scanf("%d",&x);
            if(x==0) z++;
            else c++;
        }
        printf("Case %d: %d\n",++t,c-z);
    }
}
