#include<bits/stdc++.h>
using namespace std;
const int size=100007;
int phi[size];
bitset<size>p;
int n;
int a[17];
void sieve(){
    for(int i=1;i<=size;i++)phi[i]=i;
    phi[1]=1;
    p[1]=1;
    for(int i=2;i<=size;i++)if(!p[i])for(int j=i;j<=size;j+=i){
        p[j]=1;
        phi[j]=phi[j]/i*(i-1);
    }
}
template<typename T>
T bigmod(T n,T p,T m){
    if(p==0) return 1;
    if(p==1) return n%m;
    T t=bigmod(n,p>>1,m);
    t=((t%m)*(t%m))%m;
    if(p&1) t=((t%m)*(n%m))%m;
    return t;
}
template<typename T>
T gooo(T i,T mod) {
	if (i == n - 1) return a[i]%mod;
	T k = gooo(i + 1, phi[mod])+phi[mod];
	return bigmod(a[i],k,mod);
}
int main(){
    string s;
    sieve();
    int c=0;
    while(cin>>s){
        if(s=="#")break;
        stringstream ss;
        ss<<s;
        int mod;
        ss>>mod;
        //cout<<ph<<endl;
        cin>>n;
        //cout<<bigmod(12,400,1000)<<endl;
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        printf("Case #%d: %d\n",++c,gooo(0,mod));
    }
}
