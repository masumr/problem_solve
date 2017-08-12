#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll fun(ll n){
    ll sum=0;
    while(n){
        sum=(sum*10)+n%10;
        n/=10;
    }
    return sum;
}
int main(){
    ll n;
    while(scanf("%lld",&n) && n){
        printf("Original number was %lld\n",n);
        ll n1=-1;
        int count=0;
        map<ll,int>mp;
        while(1){
            if(mp[n])break;
            mp[n]=1;
            n1=n;
            ll n2=n;
            stringstream ss;
            string s,s1;
            ss<<n;
            ss>>s;
            sort(s.rbegin(),s.rend());
            ss.clear();
            n2=fun(n2);
            ss<<n2;
            //cout<<fun(n2)<<endl;;
            ss>>s1;
            sort(s1.begin(),s1.end());
            ll ss1=atoi(s.c_str());
            ll ss2=atoi(s1.c_str());
            n=ss1-ss2;
            cout<<ss1<<" - "<<ss2<<" = "<<n<<endl;
            count++;
            ss.clear();
        }
        printf("Chain length %d\n\n",count);
    }
}
