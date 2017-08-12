#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int N=1009;
ll a[N];
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        for(int i=0;i<n;i++)scanf("%lld",&a[i]);
        int cnt=1;
        ll sum=a[0];
        for(int i=1;i<n-1;i++){
            if(sum+a[i]<a[i+1]){
                sum+=a[i];
                cnt++;
            }
        }
        printf("%d\n",cnt+1);
    }
}

