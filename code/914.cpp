#include<bits/stdc++.h>
using namespace std;
const int n=1000007;
vector<int>v;
bitset<n>p;
void sieve(){
    for(int i=3;i*i<=n;i+=2)if(p[i]==0)for(int j=i*i;j<=n;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=n;i+=2)if(p[i]==0)v.push_back(i);
}
int binary_search(int lo,int hi,int n){
    if(lo>=hi) return lo;
    int mid=(lo+hi)/2;
    if(v[mid]>=n)return binary_search(lo,mid,n);
    else return binary_search(mid+1,hi,n);
}
int main(){
    sieve();
    int k=v.size()-1;
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        int x1=binary_search(0,k,x);
        int y1=binary_search(0,k,y);
        while(v[y1]>y)y1--;
        //while(v[x1]>x) x1--;
        map<int,int>mp;
        vector<int>v1;
        for(int i=x1+1;i<=y1;i++){
            int sum=(v[i]-v[i-1]);
            if(mp[sum]==0)v1.push_back(sum);
            mp[sum]++;
        }
        int mx=0;
        int yy=0;
        for(int i=0;i<v1.size();i++){
            if(mx<mp[v1[i]]){
                mx=mp[v1[i]];
                yy=v1[i];
            }
        }
        int count=0;
        for(int i=0;i<v1.size();i++){
            if(mp[v1[i]]==mx){
                //cout<<v1[i]<<' '<<mp[v1[i]]<<endl;
                count++;
            }
        }
        cout<<count<<endl;
        if(count==1) printf("The jumping champion is %d\n",yy);
        else printf("No jumping champion\n");
        v1.clear();mp.clear();
    }
}
