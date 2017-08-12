#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll gcd(ll a,ll b){
    return (b==0)?a:gcd(b,a%b);
}
int main(){
    ll n;
    while(cin>>n and n!=0){
        vector<int>v;
        for(int i=0;i<n;i++){
            ll x;
            cin>>x;
            v.push_back(x);
        }
        ll count=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                if(gcd(v[i],v[j])==1) count++;
            }
        }
        if(count==0) cout<<"No estimate for this data set."<<endl;
        else{
            double total=((n-1)*(((n-1))+1))/2;
            double result=sqrt((total*6)/double(count));
            printf("%.6lf\n",result);
        }
        v.clear();
    }
}
