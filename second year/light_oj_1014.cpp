#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll t,c=0;
    cin>>t;
    while(t--){
        ll l,p;
        cin>>l>>p;
        ll q=l-p;
        printf("Case %d: ",++c);
        if(p>=q) cout<<"impossible"<<endl;
        else{
            vector<ll>v;
            for(int i=1;i<=sqrt(l);i++){
                if(q%i==0 && i>p){
                    v.push_back(i);
                }
                if(q%i==0 && i!=q/i){
                    if(q/i>p) v.push_back(q/i);
                }
            }
            sort(v.begin(),v.end());
            for(int i=0;i<v.size();i++) {
                    cout<<v[i];
                    if(i!=v.size()-1) cout<<' ';
            }
            cout<<endl;
            v.clear();
        }
    }
}
