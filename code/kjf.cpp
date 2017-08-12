#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int v[100001],vv[100001];
    int sum=0;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        vv[i]=x;
        sum+=(x);
        v[i]=sum;
        //cout<<vv[i]<<' '<<v[i]<<endl;
    }
    int as[100001];
    int s1,s2;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        x--;
        v[x]-=vv[x];
        sum-=vv[x];
        cout<<v[x]<<' '<<sum<<' ';
        cout<<max(v[x],sum-v[x])<<endl;
        v[t-1]=sum;
    }
    //for(int  i=0;i<as.size();i++) cout<<as[i]<<endl;

}
