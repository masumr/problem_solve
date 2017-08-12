#include<bits/stdc++.h>
using namespace std;
const int N=10000009;
bitset<N>p;
vector<int>v;
void sieve(){
    for(int i=3;i*i<=N;i++)if(!p[i])for(int j=i*i;j<=N;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
int binary_s(int lo,int hi,int n){
    if(lo>=hi)return lo;
    int m=(lo+hi)/2;
    if(v[m]>=n)return binary_s(lo,m,n);
    else return binary_s(m+1,hi,n);
}
int rem(string s,int n){
    int rem=0,sum=0;
    for(int i=0;i<s.size();i++){
        sum=(rem*10+(s[i]-'0'));
        rem=sum%n;
    }
    return rem;
}
int main(){
    sieve();
    string s;
    int k;
    while(cin>>s>>k){
        if(s=="0" && k==0)break;
        bool ck=0;
        int len;
       // cout<<s<<' '<<k<<endl;
        for(int i=0;i<v.size() && v[i]<k ;i++){
            //cout<<s<<' '<<v[i]<<' '<<rem(s,v[i])<<endl;
            if(rem(s,v[i])==0){
                ck=1;
                len=v[i];
                break;
            }
        }
        if(ck)printf("BAD %d\n",len);
        else printf("GOOD\n");

    }

}
