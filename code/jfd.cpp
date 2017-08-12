#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n;
        vector<int>v;
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>x;
            v.push_back(x);
            mp[x]=1;
        }
        sort(v.begin(),v.end());
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int sum=v[i]+v[j];
                if(mp[sum]==1)count++;
            }
        }
        printf("Case %d: %d\n",++c,count);
        v.clear();mp.clear();

    }
}
