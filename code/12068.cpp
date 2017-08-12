#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int>a;
ll gcd(ll a,ll b){
    return (b==0)?a:gcd(b,a%b);
}
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll x,s1=1;
        for(int i=0;i<n;i++){
            cin>>x;
            a.push_back(x);
            s1*=x;
        }
        ll sum=0;
        for(int i=0;i<a.size();i++)
            sum+=(s1/a[i]);
        s1*=n;
        ll w=gcd(s1,sum);
        printf("Case %d: %lld/%lld\n",++c,s1/w,sum/w);
        a.clear();
    }
}
