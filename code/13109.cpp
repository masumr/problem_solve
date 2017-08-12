#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,m,max_w,w[100000],sum;
    scanf("%d",&t);
    while (t--){
        scanf("%d%d",&m,&max_w);
        for (int i=0;i<m;i++)
            scanf("%d",&w[i]);
        sort(w,w+m);
        sum=0;
        int flag=1;
        for(int i=0;i<m;i++){
            sum+=w[i];
            if (sum>max_w){
                printf("%d\n",i);
                flag=0;
                break;
            }
        }
        if (flag) printf("%d\n",m);
    }
}
