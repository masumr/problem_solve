#include<bits/stdc++.h>
using namespace std;
#define F1(i,a) for(int i=1;i<=a;i++)
#define F2(i,a) for(int i=0;i<a;i++)
typedef long long int ll;
int main(){
    int x,y;
    char c;
    ll sum=0;
    while(cin>>x>>c>>y){
        if(c=='+') cout<<x+y<<endl;
        else if(c=='x') cout<<x*y<<endl;
        else if(c=='/'){ cout<<x/y<<endl;cout<<x%y<<endl;}
        else if(c=='%') cout<<x%y<<endl;
        else cout<<(ll)pow(x,y)<<endl;
    }
}
