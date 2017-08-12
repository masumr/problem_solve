#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        float r,s;
        scanf("%f%f",&r,&s);
       r*=2;
       s=sqrt(2*s*s);
        cout<<r<<' '<<s<<endl;
        if(r>=s)cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
