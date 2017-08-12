#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int t,c=0;
    cin>>t;
    while(t--)
    {
        ll a,b;
        cin>>a>>b;
        ll sum=((2*b*(2*b+1))/2)-((b*(b+1)));
        printf("Case %d: %lld\n",++c,sum*(a/(2*b)));
    }
}
