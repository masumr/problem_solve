#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,m;
    cin>>n>>a>>b>>m;
    int s=(n/a);
    int sum=min(s*m,n*b);
    sum+=(n%a)*b;
    int sk=ceil((double)(n*1.0)/a)*m;
    sum=min(sum,sk);
    cout<<sum<<endl;
}
