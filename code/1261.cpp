#include<bits/stdc++.h>
using namespace std;
bool ck(bool val,string s){
    //cout<<s<<' ';
    if(s.size()==0)return true;
    vector<pair<int,int> >v;
    int t1=1,t2=0,cnt=1;
    while(t1<s.size()){
        if(s[t1]==s[t2]){
            cnt++;
        }
        else{
            if(cnt>=2)v.push_back(make_pair(t2,t1-1));
            cnt=1;
            t2=t1;
        }
        t1++;
    }
    if(cnt>=2)v.push_back(make_pair(t2,t1-1));
    for(int i=0;i<v.size();i++){
        string tmp=s;
         if(val)return true;
        tmp.erase(tmp.begin()+v[i].first,tmp.begin()+v[i].second+1);
        ///cout<<tmp<<endl;
        val=(val|ck(val,tmp));
        if(val)return true;
    }
    return false;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        string s;
        cin>>s;
        //s.erase(s.begin()+2,s.begin()+4);
        //cout<<s<<endl;
        bool cp=ck(0,s);
        if(cp)printf("1\n");
        else printf("0\n");
    }
}
