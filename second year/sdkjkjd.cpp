#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    scanf("%d",&t);
    int mx=INT_MIN;
    while(t--){
        int b,s,g,r;
        scanf("%d%d%d%d",&b,&s,&g,&r);
        int sum=b*1+s*3+g*10-r*5;
        mx=max(mx,sum);
        printf("Player %d: %d\n",++c,sum);
    }
    printf("High Score = %d\n",mx);
}
