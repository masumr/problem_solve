#include<bits/stdc++.h>
using namespace std;
bool compare(pair<float,string>a,pair<float,string>b){
    if(a.first>b.first) return true;
    else if(a.first==b.first){
        if(a.second<b.second)return true;
        else return false;
    }
    else return false;
}
int main(){
    vector<pair<float,string> >v;
    int t;
    cin>>t;
    while(t--){
        string a;
        float n;
        cin>>a>>n;
        v.push_back(make_pair(n,a));
    }
    sort(v.begin(),v.end(),compare);
    int co=1;
    for(int i=0;i<v.size();i++){
        printf("%d.",co);
        cout<<v[i].second<<endl;
        if(i!=v.size()-1 && v[i].first!=v[i+1].first)co++;
    }
}
