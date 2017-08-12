#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        string s;
        cin>>s;
        int l=s.size();
        string k="";
        if(s.size()>=6){
        for(int i=l-1;i>l-6;i--)k+=s[i];
            reverse(k.begin(),k.end());
        }
        else k=s;
        string v;
        bool ck=0;
        for(int i=0;i<k.size();i++){
            if(k[i]!='0' || ck){
                ck=1;
                v+=k[i];
            }
        }
        if(v.size()==0)cout<<0<<endl;
        else cout<<v<<endl;
        v.clear();k.clear();
    }
}
