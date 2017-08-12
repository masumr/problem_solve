#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>x;
int main(){
    ll a,b;
    while(cin>>a>>b){
        while(b!=0){
            ll temp=b;
            x.push_back(a/b);
            b=a%b;
            a=temp;
        }
        for(int i=0;i<x.size();i++){
            if(i==0)printf("[%d;",x[i]);
           else if(i==x.size()-1)printf("%d]",x[i]);
            else cout<<x[i]<<',';
        }
        cout<<endl;
        x.clear();
    }
}
