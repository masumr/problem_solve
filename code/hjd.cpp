#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,z=0;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int s1=a*100;
        int s2=b*c;
        printf("Case %d: ",++z);
        if(s1<s2) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}
