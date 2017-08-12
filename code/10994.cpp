#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll n1,n2;
    while(cin>>n1>>n2){
        if(n1<0 && n2<0) break;
        ll sum=0;
        n1--;
        while(n2){
            if(n2>=10)
                sum+=(n2/10)*45;
            int mod=n2%10;
            sum+=(mod*(mod+1))/2;
            n2/=10;
        }
        while(n1){
            if(n1>=10)
                sum-=(n1/10)*45;
            int mod=n1%10;
            sum-=(mod*(mod+1))/2;
            n1/=10;
        }
        cout<<sum<<endl;

    }
}
