#include<bits/stdc++.h>
using namespace std;
const int N=300;
bitset<N>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=N;i+=2)if(!p[i])for(int j=i*i;j<=N;j+=i*2)p[j]=1;
    //v.push_back(2);
    for(int i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
int a[300][16];
int vv[1003][16];
vector<int>s[16];
map<int,int>mp;
int main(){
    sieve();
   // for(int i=0;i<v.size();i++)cout<<v[i]<<' ';
    //cout<<endl;
    memset(a,0,sizeof a);
    memset(vv,0,sizeof vv);
    s[0].push_back(0);
    for(int i=1;i<=14;i++){
        for(int k=0;k<s[i-1].size();k++){
            int sk=s[i-1][k];
            for(int j=0;j<v.size();j++){
                int sum=sk+v[j];
                if(sum<=1000){
                    vv[sum][i]=v[j];
                    if(!mp[sum]){
                        s[i].push_back(sum);
                        mp[sum]=1;
                    }
                }
            }
        }
       mp.clear();
    }
    int n,t,pp=0;
    while(scanf("%d%d",&n,&t) &&(n || t)){
        printf("CASE %d:\n",++pp);
        if(vv[n][t]!=0){
            vector<int>ck;
            for(int i=t;i>=1;i--){
                ck.push_back(vv[n][i]);
                n-=vv[n][i];
            }
            sort(ck.begin(),ck.end());
            for(int i=0;i<ck.size();i++){
                printf("%d",ck[i]);
                if(i!=ck.size()-1)printf("+");
            }
            printf("\n");
            ck.clear();
        }
        else printf("No Solution.\n");
    }
}
