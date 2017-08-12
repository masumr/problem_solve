#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        int count=0;
        int p=2;
        for(int i=1;i<n;i++){
            if(v[i]>p){
                count+=ceil((v[i]-p)/5.0);
                p=v[i];
            }
        }
        printf("Case %d: %d\n",++c,count);
        v.clear();
    }
}
