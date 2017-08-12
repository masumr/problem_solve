#include<bits/stdc++.h>
using namespace std;
const int N=30;
vector<int>v[N];
bool col[N];
int co;
void dfs(int s){
    col[s]=1;
    for(int i=0;i<v[s].size();i++){
        int ss=v[s][i];
        if(col[ss]==0){
            co++;
            dfs(ss);
        }
    }
}
map<char,int>mp;
int main(){
    int k=1;
    for(char i='A';i<='Z';i++){
        mp[i]=k++;
    }
    int t;
    scanf("%d",&t);
    while(t--){
        char ch;
        cin>>ch;
        getchar();
        //cout<<ch<<endl;
        string s;
        while(getline(cin,s)){
            if(s.size()==0)break;
            char x,y;
            sscanf(s.c_str(),"%c %c",&x,&y);
            int t1=mp[x];
            int t2=mp[y];
            //cout<<t1<<' '<<t2<<endl;
            v[t1].push_back(t2);
            v[t2].push_back(t1);
        }
        //cout<<mp[ch]<<endl;
        memset(col,0,sizeof col);
        int mx=0;
        int count=0;
        for(int i=1;i<=mp[ch];i++){
            if(col[i]==0){
               dfs(i);
               count++;
            }
        }
        printf("%d\n",count);
        if(t)printf("\n");
        for(int i=1;i<=mp[ch];i++)v[i].clear();
    }
}
