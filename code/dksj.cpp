#include<bits/stdc++.h>
using namespace std;
const int N=100009;
typedef long long int ll;
ll gcd(ll a,ll b){return (b==0)?a:gcd(b,a%b);}
ll lcm(ll a,ll b){return a/gcd(a,b)*b;}
ll a[N];
int main(){
    int t,c=0;
   int n;
   ll k;
   cin>>n>>k;
   int cnt=0;
   ll l=1;
  for(int i=0;i<n;i++)scanf("%lld",&a[i]);
  sort(a,a+n);
  for(int i=0;i<n;i++){
    ll gh=lcm(a[i],l);
    if(gh%k){
        l=gh;
        l%=k;
    }
    else cnt++;
  }
  printf("%d\n",cnt);
}
