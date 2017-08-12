#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,d=0;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        printf("Case %d: ",++d);
        int sum=a-b;
        if(sum==0){
            if(c==0) cout<<1<<endl;
            else cout<<"Impossible"<<endl;
        }
        else{
            if(c%sum==0 && sum>0) cout<<c/sum<<endl;
            else cout<<"Impossible"<<endl;
        }
    }
}
