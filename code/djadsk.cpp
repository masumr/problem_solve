#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    int t,c=0;
    cin>>t;
    while(t--){
        cin>>a>>b;
        printf("Case %d: ",++c);
        cout<<(a+b)<<abs(a-b)<<endl;
    }
}
