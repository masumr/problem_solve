#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,t;
    string a;
    cin>>n>>t;
    cin>>a;
    int t1,g1;
    for(int i=0;i<a.size();i++){
        if(a[i]=='G')g1=i;
        if(a[i]=='T') t1=i;
    }
    //t--;
    if(abs(g1-t1)%t!=0)cout<<"NO"<<endl;
    else{
        bool ck=false;
        if(g1<t1){
            for(int i=g1;i<=t1;i+=t){
                if(a[i]=='#'){
                    ck=true;
                    //cout<<true<<endl;
                }
            }
        }
        else{
            for(int i=g1;i>=t1;i-=t) if(a[i]=='#'){ck=true;}
        }
        if(ck)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;

    }
}
