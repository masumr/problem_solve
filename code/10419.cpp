#include<bits/stdc++.h>
using namespace std;
const int N=300;
bitset<N>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=N;i+=2)if(!p[i])for(int j=i*i;j<=N;j+=i*2)p[j]=1;
    v.push_back(2);
    for(int i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
int a[300][16];
int vv[1003][16];
int main(){
    sieve();
   // for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
    //cout<<endl;
    memset(a,0,sizeof a);
    memset(vv,0,sizeof vv);
    int k=0;
    for(int i=1;i<=14;i++){
        //cout<<1<<' ';
        for(int j=0;j<v.size();j++){
            int sum=a[j][i-1]+v[j];
            a[j][i]=sum;
            if(i==4)cout<<sum<<' ';
            if(sum<=1000)vv[sum][i]=v[j];
        }
        cout<<endl;
    }
    int n,t;
    while(scanf("%d%d",&n,&t) &&(n || t)){
        if(vv[n][t]!=0){
            for(int i=1;i<=t;i++){
                printf("%d",vv[n][i]);
                if(i!=t)printf("+");
            }
            printf("\n");
        }
        else printf("No Solution.\n");
    }
}
