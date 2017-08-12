#include<bits/stdc++.h>
using namespace std;
vector<int>a;
bitset<101>p;
void sieve(){
    a.push_back(2);
    for(int i=3;i<=101;i+=2){
        if(p[i]==0){
            a.push_back(i);
            for(int j=i*i;j<=101;j+=i*2){
                p[j]=1;
            }
        }
    }
}
int main(){
    sieve();
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        vector<int>v;
        for(int i=0;a[i]<=n;i++){
            int sum=a[i];
            int k=1,count=0;
            while(sum<=n){
                count+=n/sum;
                sum=pow(a[i],++k);
            }
            v.push_back(count);
        }
        printf("Case %d: %d =",++c,n);
        for(int i=0;i<v.size();i++) {
            printf(" %d (%d)",a[i],v[i]);
            if(i!=v.size()-1) printf(" *");
        }
        cout<<endl;
        v.clear();
    }
}
