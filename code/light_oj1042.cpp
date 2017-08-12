#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int>com(ll n){
    vector<int>v;
    while(n!=0){
        v.push_back(n%2);
        n/=2;
    }
    return v;
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll n,sum=0;
        scanf("%lld",&n);
        vector<int>v=com(n);
        for(int i=v.size()-1;i>=0;i--) cout<<v[i];
        cout<<endl;
        int c1,c2,count=0;
        for(int i=0;i<v.size();i++){
            if(v[i]==1){
                c1=i;
                count=1;
            }
            if(v[i]==0 && count){
                c2=i;
                count++;
                break;
            }
        }

        if(count==2) {
            v[c1]-=1;
            v[c2]+=1;
            ll f=1;
            for(int i=0;i<v.size();i++){
                sum+=(v[i]*f);
                f*=2;
            }
        }
        else{
            ll f=1;
            for(int i=0;i<v.size()-1;i++){
                sum+=(v[i]*f);
                f*=2;
            }
            f*=2;
            sum+=(v[v.size()-1]*f);
        }
        printf("Case %d: %lld\n",++c,sum);
        v.clear();
    }
}
