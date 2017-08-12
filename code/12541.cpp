#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b,c;
    int d,m,y;
    int t;
    cin>>t;
    int m1=0,m2=10000000;
    while(t--){
        cin>>a>>d>>m>>y;
        int sum=(y*365)+(m*30)+d;
        if(m1<sum){
            m1=sum;
            b=a;
        }
        if(m2>sum){
            m2=sum;
            c=a;
        }
    }
    cout<<b<<endl<<c<<endl;
}
