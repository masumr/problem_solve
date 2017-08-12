#include<bits/stdc++.h>
using namespace std;
const int N=25153;
vector<int>ed[N];
vector<string>in[17];
int dis[N];
int path[N];
map<string,int>mp;
map<int,string>mp1;
int cnt(string a,string b){
    int cn=0;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i]){
            cn++;
        }
    }
    return cn;
}
void bfs(int a,int b){
    memset(dis,-1,sizeof dis);
    queue<int>q;
    path[a]=0;
    dis[a]=0;
    q.push(a);
    while(!q.empty()){
        int u=q.front();q.pop();
        for(int i=0;i<ed[u].size();i++){
            int v=ed[u][i];
            //cout<<mp1[v]<<' ';
            if(v==b){
                path[v]=u;
                dis[v]=dis[u]+1;
                return;
            }
            if(dis[v]==-1){
               // cout<<mp1[v]<<' ' ;
                dis[v]=dis[u]+1;
                path[v]=u;
                q.push(v);
            }
        }
    }
}
void pat(int s){
    if(path[s]==0){
        cout<<mp1[s]<<endl;
        return;
    }
    pat(path[s]);
    cout<<mp1[s]<<endl;
}
int main(){
    string s;
    vector<string>v;
    while(getline(cin,s)){
        if(s.size()==0)break;
        v.push_back(s);
    }
    int cn=1;
    for(int i=0;i<v.size();i++){
        if(!mp[v[i]]){
            mp[v[i]]=cn;
            mp1[cn]=v[i];
            cn++;
        }
    }
    for(int i=0;i<v.size();i++){
        //cout<<v[i]<<' ';
        int ln=v[i].size();
        in[ln].push_back(v[i]);
    }
    for(int i=1;i<=16;i++){
        for(int j=0;j<in[i].size();j++){
          // cout<<in[i][j]<<endl;
            for(int k=j+1;k<in[i].size();k++){
                string s1=in[i][j],s2=in[i][k];
                //cout<<s1<<' '<<s2<<' '<<cnt(s1,s2)<<endl;
                if(cnt(s1,s2)==1){
                    ed[mp[s1]].push_back(mp[s2]);
                    ed[mp[s2]].push_back(mp[s1]);
                }
            }
           // cout<<endl;
        }
    }
    /*for(int i=0;i<v.size();i++){
        int mn=mp[v[i]];
        cout<<v[i]<<' ';
        for(int j=0;j<ed[mn].size();j++){
            int kj=ed[mn][j];
            cout<<mp1[kj]<<' ';
        }
        cout<<endl;
    }*/
    string s1,s2;
    bool ck=0;
    while(cin>>s1>>s2){
        if(ck)cout<<endl;
        bfs(mp[s1],mp[s2]);
        if(dis[mp[s2]]==-1)printf("No solution.\n");
        else pat(mp[s2]);
        ck=1;
    }
}
