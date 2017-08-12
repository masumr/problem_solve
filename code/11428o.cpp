#include<bits/stdc++.h>
using namespace std;
int a[209];
int main(){
    int n;
    while(scanf("%d",&n) && n){
        int x,y;
        bool ck=false;
        for(int i=1;i<=n;i++){
            for(int j=i+1;j<=n;j++){
                int sum=(j*j*j)-(i*i*i);
                if(sum>n)break;
                else if(sum==n){
                   printf("%d %d\n",j,i);
                    ck=true;
                    break;
                }
            }
            if(ck)break;
        }
        if(!ck)printf("No solution\n");
    }
}
