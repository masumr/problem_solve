#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll a,b;
    while(cin>>a>>b)
    {
        ll sum=a-b;
        if(sum<0) sum=-sum;
        cout<<sum<<endl;
    }
}
