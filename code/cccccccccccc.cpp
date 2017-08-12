#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int l=0;
    int u=100000000;
    int mn=0,sum=0;
    for(int i=0;i<n;i++){
        int x,y;
        cin>>x>>y;
        if(y==1)l=max(l,1900-mn);
        else u=min(u,1899-mn);
        mn+=x;
    }
    //cout<<l<<' '<<u<<endl;
    sum=mn;
    if(u==100000000)cout<<"Infinity"<<endl;
    else if(l>u)cout<<"Impossible"<<endl;
    else cout<<mn+u<<endl;
}
