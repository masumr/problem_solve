#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        printf("Case %d:\n",++c);
        for(int i=1;i<=10;i++){
            printf("%d X %d = %d\n",n,i,n*i);
        }
    }
}
