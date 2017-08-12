#include<bits/stdc++.h>
using namespace std;
const int N=100007;
typedef long long int ll;
ll gcd(ll a,ll b){(b==0)?a:gcd(b,a%b);}
ll a[N];
int main(){
    int n;
    cin>>n;
    cin>>a[0];
    ll g=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        g=gcd(g,a[i]);
    }
    printf("YES\n");
    if(g!=1)printf("0\n");
    else{
        ll sum=0;
        for(int i=0;i<n;i++){
            if(a[i]&1){
                if(a[i+1]&1 && i+1<n){sum++;++a[i+1];}
                else sum+=2;
            }
        }
        printf("%lld\n",sum);
    }
}
