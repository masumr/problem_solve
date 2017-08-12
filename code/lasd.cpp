#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int c=0;
    while(t--){
        int x,y,z;
        cin>>x>>y>>z;
        if((z&(x^y))|(x&y)) ++c;
    }
    cout<<c<<endl;
}
