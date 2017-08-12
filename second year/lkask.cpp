#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if(a==0 && b==0){
        cout<<"NO"<<endl;
        return 0;
    }
    if(a<b)swap(a,b);
    if(a-1==b || a==b)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
