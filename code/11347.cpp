#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
ll INF=1000000000000000000;
const int size=1003;
bitset<size>p;
vector<int>v;
void sieve(){
    for(int i=3;i<=size;i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=size;j+=(i*2)) p[j]=1;
        }
    }
    v.push_back(2);
    for(int i=3;i<=size;i+=2){
        if(p[i]==0) v.push_back(i);
    }
}
ll NOD(ll n){
    ll sum=1;
    for(int i=0;i<v.size() and v[i]<=n;i++){
        if(n%v[i]==0){
            int count=1;
            while(n%v[i]==0){
                count++;
                n/=v[i];
            }
            sum*=count;
        }
    }
    return sum;
}
int main(){
    sieve();
    string st;
    int t,c=0;
    cin>>t;
    while(t--){
            int n;
        cin>>n>>st;
        ll sum=1;
        int k=st.size();
        int x=k;
        if(n%k!=0) x=n%k;
        int count=0;
        int a[1001];
        for(int i=1;i<=n;i++) a[i]=1;
        for(int i=n;i>=x;i-=k){
            int xx=i;
            for(int j=0;j<v.size() and v[j]<=i;j++){
                if(xx%v[j]==0){
                    while(xx%v[j]==0){
                        xx/=v[j];
                        a[v[j]]++;
                    }
                }
            }
        }
        for(int i=1;i<=n;i++){
            if(sum*a[i]>=INF){
                sum=0;
                break;
            }
            sum*=a[i];
        }
        if(sum==0) printf("Case %d: Infinity\n",++c);
        //else if(sum==1) printf("Case %d: 1\n",++c);
        else printf("Case %d: %lld\n",++c,sum);
    }
}
