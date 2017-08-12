#include<bits/stdc++.h>
using namespace std;
const int N=123456;
bitset<N>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=N;i+=2)if(!p[i])for(int j=i*i;j<=N;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
int a[N];
int main(){
    int n;
    sieve();
    cin>>n;
    int mx=0;
    int kk=0;
    for(int i=0;i<=n+7;i++)a[i]=1;
    bool ck=0;
    for(int i=0;i<v.size() && v[i]*v[i]<=n+1;i++){
        int k=1;
        for(int j=2*v[i];j<=n+1;j+=v[i]){
            if(a[j]==1){
                k++;
                a[j]=k;
            }
            else if(ck && kk==k+1){
                k=kk;
                k++;
                a[j]=k;
            }
            else{
                ck=1;
                kk=a[j];
            }
        }
        mx=max(mx,k);
    }
    cout<<mx<<endl;
    for(int i=2;i<=n+1;i++)cout<<a[i]<<' ';
    cout<<endl;
}
