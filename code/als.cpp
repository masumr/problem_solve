#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
   ll n,x;
   cin>>n>>x;
   n%=6;
   if(n==0){
        cout<<x<<endl;
   }
   else if(n==1){
        if(x==2)cout<<2<<endl;
        else if(x==1)cout<<0<<endl;
        else cout<<1<<endl;
   }
   else if(n==2){
        if(x==0)cout<<1<<endl;
        else if(x==1)cout<<2<<endl;
        else cout<<0<<endl;
   }
  else if(n==3){
        if(x==0)cout<<2<<endl;
        else if(x==1)cout<<1<<endl;
        else cout<<0<<endl;
   }
   else if(n==4){
        if(x==0)cout<<2<<endl;
        else if(x==1)cout<<0<<endl;
        else cout<<1<<endl;
   }
   else if(n==5){
        if(x==0)cout<<0<<endl;
        else if(x==1)cout<<2<<endl;
        else cout<<1<<endl;
   }
}
