#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,s,q;
    cin>>t>>s>>q;
    int cnt=0;
    while(s<t){
        s+=(s*(q-1));
        cnt++;
    }
    cout<<cnt<<endl;
}
