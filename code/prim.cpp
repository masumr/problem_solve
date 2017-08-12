#include<bits/stdc++.h>
using namespace std;
bitset<10001>p;
vector<int>v;
void sieve(){
    int n=10001;
    v.push_back(2);
    for(int i=3;i*i<=n;i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=n;j+=(i*2)) p[j]=1;
        }
    }
    for(int i=3;i<=n;i+=2){
        if(p[i]==0) v.push_back(i);
    }
}
int prim(int n){
    int sum=1;
    for(int i=0;i<v.size() && v[i]<=n;i++){
        int s=n;
        if(n%v[i]==0){
            int count=1;
            while(n%v[i]==0){
                count++;
                n/=v[i];
            }
            sum*=count;
        }
    }
    if(n>1) sum*=2;
    return sum;
}
int a1[1000001];
int main(){
    int t,c=0;
    sieve();
    cin>>t;
    for(int i=1;i<=1000000;i++){
        a1[i]=prim(i);
    }
    while(t--){
        int a,b;
        cin>>a>>b;
        int n;
        cin>>n;
        vector<int>x;
        x.clear();
        for(int i=0;i<n;i++){
            int y;
            cin>>y;
            x.push_back(y);
        }
        int sum=0;
        printf("Case %d: ",++c);
        vector<int>v1;
        map<int,int>v2;
        int c=0;
        for(int i=a;i<=b;i++){
            if(v2[a1[i]]==0){
                v1.push_back(a1[i]);
                v2[a1[i]]=x[i];
            }
            c++;
        }
        sort(v1.begin(),v1.end());
        int x1=v1.size()-1;
        sum=v2[v1[x1]];
        cout<<sum<<endl;
        v1.clear();
        v2.clear();
    }
}
