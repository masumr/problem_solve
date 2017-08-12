#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const int n=101;
const int INF=10000000;
typedef long long int ll;
bitset<n>p;
vector<int>v;
void sieve(){
    v.push_back(2);
    for(int i=3;i<=n;i+=2){
        if(p[i]==0){
            v.push_back(i);
            for(int j=i*i;j<=n;j+=(i*2)) p[j]=1;
        }
    }
}
int mod(int n,int m){
    int sum=1;
    for(int i=2;i<=n;i++){
        sum*=i;
        sum%=m;
    }
    return sum;
}
vector<int>PF(int n){
    vector<int>a;
    for(int i=0;i<v.size() and v[i]<=n;i++){
        if(n%v[i]==0){
            int sum=1;
            while(n%v[i]==0){
                n/=v[i];
                sum*=v[i];
            }
            a.push_back(sum);
        }
    }
    if(n>1) a.push_back(n);
    return a;
}
int CN(int n,int m){
    int count=0;
    int s=1;
    for(int i=2;i<=n;i++){
        s*=i;
        if(s%m!=0) s%=m;
        else{
            while(s%m==0){
                count++;
                s/=m;
            }
        }
    }
    return count;
}
int get_result(int n, int m,int prime_factor){
   if(n/m == 0){
    return 0;
   }
    return n/m + get_result(n,m*prime_factor,++prime_factor);
}
int main(){
    sieve();
    int t,c=0;
    cin>>t;
    while(t--){
        int m,n;
        cin>>m>>n;
        printf("Case %d:\n",++c);
        if(n==1){
            cout<<0<<endl;
            continue;
        }
        if(mod(n,m)==0){
            vector<int>a=PF(m);
            int mx=INF;
            for(int i=0;i<a.size();i++){
                mx=min(mx,CN(n,a[i]));
            }
            a.clear();
            cout<<mx<<endl;
        }
        else cout<<"Impossible to divide"<<endl;
    }
}
