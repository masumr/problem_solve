#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    scanf("%d",&t);
    int mx=-11111111;
    while(t--){
        int b,s,g,r;
        scanf("%d%d%d%d",&b,&s,&g,&r);
        int sum=b+s*3+g*10-r*5;
        mx=max(mx,sum);
        sum=max(0,sum);
        printf("Player %d: %d\n",++c,sum);
    }
    printf("High Score = %d\n",mx);
}
