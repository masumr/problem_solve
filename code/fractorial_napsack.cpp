#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
vector<pii>v;
bool cmp(pii a,pii b){
    return a.first*b.second<b.first*a.second;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int w,p;
        cin>>w>>p;
        v.push_back(make_pair(w,p));
    }
    int w;
    cin>>w;
    int ans=0;
    sort(v.begin(),v.end(),cmp);
    for(int i=0;i<v.size();i++){
        int z=min(w,v[i].first);
        w-=z;
        ans+=z*v[i].second;
    }
    cout<<ans<<endl;

}
