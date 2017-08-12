#include<bits/stdc++.h>
using namespace std;
int ar[1000005];
int n;
map<int,int>mp;

int twopointer(){
    int mn=100007;
    int hi=0,lo=0;
    while(hi<n)
    {
        if(mp[6]&&mp[7]&&mp[8]&&mp[5])
        {
            mp[ar[lo]]--;
            lo++;
        }
        for(int j=5;j<=8;j++)
        {
            if(!mp[j])
            {
                mp[ar[hi]]++;
                hi++;

                break;
            }
        }
        if(mp[6]&&mp[7]&&mp[8]&&mp[5])
            mn=min(hi-lo,mn);
    }
    while(mp[ar[lo]]!=1){
        mp[ar[lo]]--;
        lo++;
    }
    mn=min(hi-lo,mn);
return mn;
}


int main(){

int t,cases=0;
cin>>t;
while(t--){
        mp.clear();
    cin>>n;
    for(int i=0;i<n;i++)cin>>ar[i];
    int ans=twopointer();
    printf("Case %d: %d\n",++cases,ans);
}
}
