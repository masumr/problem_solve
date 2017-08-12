#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll b,c,d;
    ll a[4];
    cin>>b>>c>>d;
    a[0]=b,a[1]=c,a[2]=d;
    sort(a,a+3);
    //b=a[0],c=a[1],d=a[2];
    ll s1=abs(a[0]-a[2]);
    //ll s2=abs(a[1]-a[2]);
    if(a[0]==a[1] && a[1]==a[2])cout<<0<<endl;
    //else if(a[2]==a[1])cout<<(a[0]<<endl;
    else{
        s1--;
        cout<<s1<<endl;
    }
    //ll sum;
    //cout<<b<<c<<d;

}
