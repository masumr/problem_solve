#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m)){
        int sum=0,cnt=0;
        while(m--){
            int x;
            scanf("%d",&x);
            sum+=x;

        }
        cnt=(n/sum);
        if(n%sum)cnt++;
        if(cnt==1)printf("Project will finish within 1 day.\n");
        else printf("Project will finish within %d days.\n",cnt);
    }
}
