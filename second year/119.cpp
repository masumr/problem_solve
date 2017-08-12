#include<bits/stdc++.h>
using namespace std;
vector<string>v;
map<string,int>mp;
int main(){
    int n;
    bool ck=0;
    while(scanf("%d",&n)==1){
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
        for(int i=0;i<n;i++){
            string s;
            int tk,t;
            cin>>s;
            scanf("%d%d",&tk,&t);
            if(t){
                tk=(tk/t)*t;
                mp[s]-=tk;
                tk/=t;
                for(int j=0;j<t;j++){
                    cin>>s;
                    mp[s]+=tk;
                }
            }
        }
        if(ck)cout<<endl;
        for(int i=0;i<v.size();i++){
            cout<<v[i]<<' '<<mp[v[i]]<<endl;
        }
        v.clear();mp.clear();
        ck=1;
    }
}
