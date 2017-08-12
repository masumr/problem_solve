#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bitset<101>p;
vector<int>v;
void sieve(){
    v.push_back(2);
    for(int i=3;i<=sqrt(101);i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=101;j+=(i*2)){
                p[j]=1;
            }
        }
    }
    for(int i=3;i<=101;i+=2){
        if(p[i]==0) v.push_back(i);
    }
}
int main(){
    int n;
    sieve();
    while(cin>>n and n!=0){
        vector<int>a;
        for(int i=0;i<v.size() and v[i]<=n;i++){
            int count=n/v[i];
            int s=v[i];
            while(v[i]*s<=n){
                s*=v[i];
                count+=n/s;
            }
            a.push_back(count);
        }
        printf("%3d! = ",n);
        for(int i=0;i<a.size();i++){
            printf("%3d",a[i]);
        }
        cout<<endl;
        a.clear();
    }
}
