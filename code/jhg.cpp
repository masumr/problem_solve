k#include<bits/stdc++.h>
using namespace std;
vector<int>v1,v2,v3,v4;
map<int,int>mp,m1;
set<int>s1,s2;
int main(){
    int t,x,sum=0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>x;
        sum+=x;
        v1.push_back(x);
    }
    for(int i=0;i<t;i++){
        cin>>x;
        s1.insert(x);
        int y=x-v1[i];
        s2.insert(y);
        if(m1[y]==0 &&m1[y]<v1[i]){
            m1[y]=v1[i];
        if(mp[x]==0|| mp[x]<v1[i]){
            mp[x]=v1[i];
        }
    }
    int s1=sum,s2=sum;
    int c1=0,c2=0;
    for(set<int>::iterator it=s1.begin();it!=s1.end();it++){
        v2.push_back(*it);
    }
    sort(v2.begin(),v2.end());
    for(int i=v2.size()-1;i>=0;i--){

    }
}

