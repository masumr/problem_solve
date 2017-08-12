#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,a,b,v;
    cin>>k>>a>>b>>v;
    int count=0;
    while(a>0){
        count++;
        int x=min(k-1,b);
        a-=(x+1)*v,b-=x;
    }
    cout<<count<<endl;
}
