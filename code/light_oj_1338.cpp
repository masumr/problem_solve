#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,c=0;
    cin>>t;
    getchar();
    while(t--){
        string a,b;
        getline(cin,a);
        getline(cin,b);
        string x="",y="";
        for(int i=0;i<a.size();i++){
            if(a[i]>='A' && a[i]<='Z') x+=(a[i]+32);
            if(a[i]>='a' && a[i]<='z') x+=a[i];
        }
        for(int i=0;i<b.size();i++){
            if(b[i]>='A' && b[i]<='Z') y+=(b[i]+32);
            if(b[i]>='a' && b[i]<='z') y+=b[i];
        }
        sort(x.begin(),x.end());
        sort(y.begin(),y.end());
        printf("Case %d: ",++c);
        if(x==y) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
