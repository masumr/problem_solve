#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>v;
void dig(ll n){
    while(n){
        v.push_back(n%10);
        n/=10;
    }
    reverse(v.begin(),v.end());
}
ll I[1100];
ll inf=1234567891011;
map<int,ll>mp;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll x,y;
        cin>>x>>y;
        I[0]-=inf;
        int mx=0;
        for(ll i=x;i<=y;i++){
            dig(i);
            I[0]=-inf;
            int ls=0;
            for(int j=1;j<=v.size();j++)I[j]=inf;
            for(int j=0;j<v.size();j++)cout<<v[j]<<' ';cout<<endl;
            for(int j=0;j<v.size();j++){
                int lo=0,hi=ls;
                while(lo<=hi){
                    int mid=(lo+hi)/2;
                    if(I[mid]<v[j])lo=mid+1;
                    else hi=mid-1;
                }
                I[lo]=v[j];
                mp[lo]++;
                if(ls<lo)ls=lo;
                mx=max(mx,ls);
            }
            v.clear();
        }
        printf("Case %d: %d %lld\n",++c,mx,mp[mx]);
        mp.clear();
    }
}
