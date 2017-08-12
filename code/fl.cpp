#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string a;
    cin>>a;
    int y=a.size();
    int s=0;
    if(y>1)
        s=((int)a[y-2]-48)*10+((int)(a[y-1]-48));
    else s=(int)a[y-1]-48;
    int sum=s%4;
    if(sum==0) cout<<4<<endl;
    else cout<<0<<endl;
}
