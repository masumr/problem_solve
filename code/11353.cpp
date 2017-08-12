#include<bits/stdc++.h>
using namespace std;
const int N=2000000;
struct node{
    int a,b;
};
bool com(node x,node y){
    if(x.b<y.b)return true;
    else if(x.b==y.b){
        if(x.a<y.a)return true;
        else return false;
    }
    else return false;
}
vector<node>vv;
vector<int>v;
bitset<N+10>p;
void sieve(){
    for(int i=4;i<=N;i+=2)p[i]=1;
    for(int i=3;i*i<=N;i+=2)if(!p[i])for(int j=i*i;j<=N;j+=(i*2))p[j]=1;
    v.push_back(2);
    for(int i=3;i<=N;i+=2)if(!p[i])v.push_back(i);
}
int pf(int n){
    int count=0;
    for(int i=0;v[i]*v[i]<=n;i++){
        if(n%v[i]==0){
            while(n%v[i]==0){
                count++;
                n/=v[i];
            }
        }
    }
    if(n>1)count++;
    return count;
}
int main(){
    sieve();
    node nd;
    //for(int i=0;i<10;i++)cout<<v[i]<<' ';
    for(int i=1;i<=N;i++){
        if(!p[i]){
            nd.a=i;
            nd.b=1;
        }
        else{
            nd.a=i;
            nd.b=pf(i);
        }
        vv.push_back(nd);
    }
    //for(int i=1;i<=10;i++)cout<<vv[i].a<<' '<<vv[i].b<<endl;
    //cout<<vv[0].a<<' '<<vv[0].b<<endl;
    sort(vv.begin(),vv.end(),com);
    //for(int i=1;i<=10;i++)cout<<vv[i].a<<' '<<vv[i].b<<endl;
    int n,c=0;
    while(scanf("%d",&n) && n){
        //cout<<vv[n].b<<endl;
        printf("Case %d: %d\n",++c,vv[n-1].a);
    }
}
