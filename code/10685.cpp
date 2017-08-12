#include<bits/stdc++.h>
using namespace std;
const int N=50011;
bool col[N];
vector<int>v[N];
int co;
int dfs(int n){
    col[n]=true;
    for(int i=0;i<v[n].size();i++){
        int ss=v[n][i];
        if(!col[ss]){
            co++;
            dfs(ss);
        }
    }
    return co;
}
int main(){
    int l,m;
    while(scanf("%d%d",&l,&m) && (l||m)){
        string s;
        map<string,int>mp;
        int k=1;
        for(int i=0;i<l;i++){
            cin>>s;
            if(mp[s]==0){
                mp[s]=k;
                k++;
            }
        }
        for(int i=0;i<m;i++){
            string s1,s2;
            cin>>s1>>s2;
            int t1=mp[s1];
            int t2=mp[s2];
            v[t1].push_back(t2);
            v[t2].push_back(t1);
        }
        int mx=0;
        memset(col,false,sizeof col);
        for(int i=1;i<=k;i++){
            if(!col[i]){
                co=0;
                mx=max(mx,dfs(i));
            }
        }
        printf("%d\n",mx+1);
        for(int i=1;i<=k;i++){
            v[i].clear();
        }
        mp.clear();
    }
}
