#include<bits/stdc++.h>
using namespace std;
int main(){
    float x;
    vector<pair<float,string> >v;
    int c;
    cin>>c;
    string a;
    while(c--){
        cin>>a>>x;
        v.push_back(make_pair(x,a));
    }
    sort(v.rbegin(),v.rend());
    int j=1;
    for(int i=0;i<v.size();i++){
        //printf("1.")
        cout<<j<<'.'<<v[i].second<<endl;
        if(v[i].first!=v[i+1].first){
                j++;
        }
    }
    v.clear();
}
