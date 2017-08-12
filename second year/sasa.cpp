#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ll;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll x;
        cin>>x;
        if(x==0)printf("Case %d: No\n",++c);
        else if(x%180==0)printf("Case %d: Yes\n",++c);
        else printf("Case %d: No\n",++c);

    }
}
