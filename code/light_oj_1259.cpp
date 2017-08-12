#include<bits/stdc++.h>
using namespace std;
const int size=10000001;
bitset<size>p;
vector<int>v;
void sieve(){
    for(int i=2;i<=sqrt(size);i++){
        if(p[i]==0){
            for(int j=i*i;j<=size;j+=i) p[j]=1;
        }
    }
    for(int i=2;i<=size;i++){
        if(p[i]==0)
            v.push_back(i);
    }
}
int main(){
    sieve();
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int count=0;
        for(int i=0;v[i]<=n/2 && i<v.size();i++){
            int sum=n-v[i];
            if(p[sum]==0){
                count++;
                //cout<<v[i]<<' '<<sum<<endl;
            }
        }
        printf("Case %d: %d\n",++c,count);
    }
}
