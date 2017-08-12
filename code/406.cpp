#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int size=512345;
ll a[size];
ll ss[size];
int main(){
    ll n;
    cin>>n;
    ll sum=0;
    ss[0]=0;
    bool ck=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i])ck=1;
        ss[i+1]=ss[i]+a[i];
        sum+=a[i];
    }
    if(sum%3!=0)cout<<0<<endl;
    else{
        //cout<<sum<<endl;
        if(!ck){cout<<(ll)(((n-2)*(n-1))/2)<<endl;return 0;}
        sum/=3;
       // cout<<sum<<endl;
        ll c1=0,c2=0;
        ll i,j;
         ll ccc=0;
        bool cc=0,cj=0;
        ll sum1=0;
        for(int i=1;i<=n;i++){
            //cout<<ss[i]<<' '<<sum<<' '<<sum*2<<endl;
            if(ss[i]==sum){
                c1++;
                if(cj){
                    sum1+=c1*c2;
                    c1=1;
                    c2=0;
                    cj=0;
                }
                cc=1;
            }
            else if(ss[i]==sum*2 && cc){
                c2++;
                cj=1;
            }
        }
       // for(int i=1;i<=n;i++)cout<<ss[i]<<' ';
        //cout<<endl;
        //cout<<c1<<endl;
        if(sum==0)cout<<((c1-1)*(c1-2))/2<<endl;
        else{
        //cout<<c1<<' '<<c2<<endl;
            sum1+=(c1*c2);
            cout<<sum1<<endl;
        }
    }
}


