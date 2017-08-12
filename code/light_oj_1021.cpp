#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll a[18];
int main(){
    a[0]=1LL;
    for(int i=1;i<=17;i++)a[i]=i*a[i-1];
    cout<<a[16]<<endl;
}
