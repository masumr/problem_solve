#include<bits/stdc++.h>
using namespace std;
vector<int>v1,v2,v3,v4;
map<int,int>mp;
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
        v2.push_back(x);
        if(mp[x]==0|| mp[x]<=v1[i])
            mp[x]=v1[i];
    }
    sort(v2.begin(),v2.end());
    int s1=0,s2=0,s3=sum;
    int count=0;
    for(int i=t-1;i>=0;i--){
        if(sum>0){
            sum-=v2[i];
            v3.push_back(v2[i]);
            s1+=mp[v2[i]];
        }
        //cout<<s1<<' '<<s2<<endl;
    }
    cout<<v3.size()<<' '<<s3-s1<<endl;
}
