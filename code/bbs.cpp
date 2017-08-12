#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=1;i<=n;i++)v.push_back(i);
    int k;
    cin>>k;
    int t=0;
    while(k--){
        int x;
        cin>>x;
        t=(t+x)%n;
        cout<<v[t]<<' ';
        v.erase(v.begin()+t);;
        n--;
    }
}
