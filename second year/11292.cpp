#include<bits/stdc++.h>
using namespace std;
const int N=20007;
int d[N],k[N];
int main(){
    int n,m;
    while(scanf("%d%d",&n,&m) &&(n || m)){
        for(int i=0;i<n;i++)scanf("%d",&d[i]);
        for(int i=0;i<m;i++)scanf("%d",&k[i]);
        sort(d,d+n);
        sort(k,k+m);
        int cnt=0;
        if(n>m)printf("Loowater is doomed!\n");
        else{
            int sum=0;
            for(int i=0;i<m;i++){
                if(k[i]>=d[cnt]){
                    sum+=k[i];
                    cnt++;
                }
                if(cnt==n)break;
            }
            //cout<<sum<<endl;
            if(cnt==n)printf("%d\n",sum);
            else printf("Loowater is doomed!\n");
        }
    }
}
