#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int n,p,q;
        cin>>n>>p>>q;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int count=0,sum=0;
        for(int i=0;i<n;i++){
            if(count==p)break;
            if(sum+v[i]>q) break;
            sum+=v[i];
            count++;
        }
        printf("Case %d: %d\n",++c,count);
        v.clear();
    }
}
