#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll inf=10000000000000;
ll a[100007];
ll in[100007];
int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)cin>>a[i];
    a[0]=-1;
    int mx=0,lo=0,hi=1;
    int count=0,ck=0;
    while(hi<=n){
        if(a[hi]>a[hi-1])hi++;
        else{
            ck++;
            //cout<<hi<<' '<<<<' '<<ck<<endl;;
            if(ck==2){
                mx=max(mx,hi-lo-1);
                lo=count;
                ck=0;
            }
            cout<<hi<<' '<<lo<<' '<<count<<endl;
            count=hi;
            hi++;
        }
    }
    mx=max(mx,hi-lo);
    cout<<mx<<endl;
}
