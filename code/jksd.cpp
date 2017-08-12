#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    while(t--){
        int a,n;
        cin>>a>>n;
        int x,y,z;
        printf("Case %d:\n",++c);
        if(a==0){
            x=n/3;
            n-=n/3;
            y=(n/3)*2;
            z=n/3;
        }
        else{
            x=(3*n)/2;
            y=n*2;
            z=x*3;
        }
        cout<<x<<endl<<y<<endl<<z<<endl;
    }
}
