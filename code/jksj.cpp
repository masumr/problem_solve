#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n,k;
    cin>>n>>k;
    if(k%4==0){
        int count=0;
        ll sum=pow(2,n);
        if(sum/2==k)cout<<n<<endl;
        else{
            ll s1=1;
            int count=0;
            while(k){
                count=0;
                s1=1;
                while(s1*2<=k){
                    s1*=2;
                    count++;
                }
                k-=s1;
                //cout<<k<<endl;
            }
            cout<<count+1<<endl;
        }
        //cout<<sum<<endl;
    }
    else{
        if(k%4==1)cout<<1<<endl;
        else if(k%4==2)cout<<2<<endl;
        else cout<<1<<endl;
    }
}
