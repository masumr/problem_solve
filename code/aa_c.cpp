#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int count=0;
        if(a>b) count++;
        else if(b-a>6) count++;
        if(count) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}
