#include<bits/stdc++.h>
using namespace std;
const int N=1000009;
bitset<N>p;
int a[N+10];
vector<int>v;
void sieve(){
    memset(a,0,sizeof a);
    for(int i=2;i<=N;i+=2)a[i]++;
    for(int i=3;i<=N;i+=2)if(!p[i])for(int j=2*i;j<=N;j+=i){
        p[j]=1;
        a[j]++;
    }
    for(int i=3;i<=N;i+=2)
    if(!p[i]){
        a[i]++;
       // v.push_back(i);
    }
}
int cnt[12][N+10];
int main(){
    sieve();
    int cn=0;
    //cout<<a[100000]<<endl;
    //memset(cnt,0,sizeof cnt);
    for(int i=0;i<=10;i++){
        cn=0;
        for(int j=0;j<=N;j++){
            if(i==a[j]  && j!=0){
                cn++;
            }
            cnt[i][j]=cn;
        }
    }
    //cout<<v.size()<<' '<<cnt[1][N]<<endl;
    //for(int i=0;i<=10;i++)cout<<cnt[i][N]<<' ';
    int t;
    scanf("%d",&t);
    while(t--){
        int a,b,n;
        scanf("%d%d%d",&a,&b,&n);
        printf("%d\n",cnt[n][b]-cnt[n][a-1]);
    }
}
