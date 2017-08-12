#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    ll a[100045],n;
    int i,t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        for(int j=0;j<6;j++)
            cin>>a[j];
        cin>>n;
        printf("Case %d: ",i);
        if(n<=5){
            cout<<a[n]%10000007<<endl;
        }
        else
        {
            for(int k=6;k<=n;k++)
                a[k]=((a[k-1]%10000007)+(a[k-2]%10000007)+(a[k-3]%10000007)+(a[k-4]%10000007)+(a[k-5]%10000007)+(a[k-6]%10000007))%10000007;
            cout<<a[n]<<endl;
        }
    }

    return 0;
}
