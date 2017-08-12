#include<bits/stdc++.h>
using namespace std;
vector<string>v1;
vector<pair<string,string> >v2,v3;
map<string,int>mp,mk;
string s,sk,cc;
bool ck(string s,string s1){
    for(int i=0;i<3;i++)if(s[i]!=s1[i])return false;
    for(int i=7;s[i]!=',';i++)if(s[i]!=s1[i])return false;
    return true;
}
int main(){
    int t,c=0;
    //cin>>s;
    //cout<<s[2]<<endl;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=1;i<=n;i++){
            cin>>s;
            v1.push_back(s);
        }
        int x=s[2]-'0';
        //cout<<1<<endl;
        for(int i=1;i<=n;i++){
            cin>>s;
            for(int i=0;i<v1.size();i++){
                if(ck(s,v1[i])){
                    cc=v1[i];
                    break;
                }
            }
            if(s[s.size()-1]=='d')v2.push_back(make_pair(cc,s));
            else v3.push_back(make_pair(cc,s));
        }
        for(int i=0;i<v2.size();i++){
            for(int j=0;j<v3.size();j++){
                if(v2[i].first==v3[j].first){
                    mk[v2[i].first]=-1;
                    break;
                }
            }
        }
        printf("Case: %d\n",++c);
        printf("Success list\n");
        for(int i=0;i<v3.size();i++){
            s=v3[i].second;
            for(int j=0;s[j]!=',';j++)cout<<s[j];
            if(mk[v3[i].first]==-1){
                cout<<" : "<<"Confused"<<endl;
            }
            else cout<<" : "<<v3[i].first<<endl;
        }
        printf("Failed list\n");
        for(int i=0;i<v2.size();i++){
            s=v2[i].second;
            sk=v2[i].first;
            //cout<<mk[sk]<<' '<<sk<<endl;
            for(int j=0;s[j]!=',';j++)cout<<s[j];
            if(mk[sk]==-1){
                cout<<" : "<<"Confused"<<endl;
            }
            else cout<<" : "<<v2[i].first<<endl;
        }
        mk.clear();mp.clear();v1.clear();v2.clear();v3.clear();

    }
}
