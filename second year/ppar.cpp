#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=123456;
int a[N];
int main()
{
    int n;
    ll k;
    cin>>n>>k;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    sort(a,a+n);
    int cnt=0;
    for(int i=0;i<n;i++){
        cnt+=(a[i]/k)+((a[i]%k)?1:0);
    }
    int num=cnt/2;
    if(cnt%2)num++;
    cout<<num<<endl;
}
