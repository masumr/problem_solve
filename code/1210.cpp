#include<bits/stdc++.h>
using namespace std;
const int nn=10007;
bitset<nn>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=nn;i+=2)if(p[i]==0)for(int j=i*i;j<=nn;j+=(i<<1))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=nn;i+=2)if(p[i]==0)v.push_back(i);
}
int binary_search(int lo,int hi,int n){
    if(lo>=hi)return lo;
    int mid=(lo+hi)>>1;
    if(v[mid]>=n)return binary_search(lo,mid,n);
    else return binary_search(mid+1,hi,n);
}
int main(){
    sieve();
    int n;
    int x=v.size();
    while(scanf("%d",&n) && n!=0){
        int t=binary_search(0,x,n);
        int lo=0,hi=0,count=0,sum=0;
        t++;
        while(hi<t){
            if(sum+v[hi]<=n){
                sum+=v[hi];
                hi++;
            }
            else{
                sum-=v[lo];
                lo++;
            }
            if(sum==n)count++;
        }
        printf("%d\n",count);
    }
}
