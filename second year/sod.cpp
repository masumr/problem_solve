#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string s;
    cin>>s;
    if(s.size()==1)cout<<0<<endl;
    else{
        ll sum=0;
        for(int i=0;i<s.size();i++)sum+=(s[i]-'0');
        int cnt=1;
        while(sum>9){
            ll n=sum;
            sum=0;
            while(n){
                sum+=n%10;
                n/=10;
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
