#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=312345;
int a[N];
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)scanf("%d",&a[i]);
    ll count=0;
    sort(a,a+n);
    for(int i=0;i<n;i++){
        if(a[i]>=i+1)count+=(a[i]-(i+1));
        else count+=((i+1)-a[i]);
    }
    cout<<count<<endl;
}
