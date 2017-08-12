#include<bits/stdc++.h>
using namespace std;
double sum[1000001];
int main(){
    int t,c=0;
    scanf("%d",&t);
    memset(sum,0,sizeof sum);
    for(int i=1;i<=1000000;i++)
        sum[i]=sum[i-1]+log10(i);
    while(t--){
        int a,b;
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",++c,(int)(sum[a]/log10(b))+1);
    }
}
