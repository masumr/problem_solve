#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        ll n,x;
        cin>>n>>x;
        printf("Case %d: ",++c);
        if(n==0||x==0)cout<<0<<endl;
        else{
          ll n1=n<<1;
          ll sum=x/n1;
          if(x%n1>n)sum++;
          printf("%lld\n",sum);
        }
    }
}
