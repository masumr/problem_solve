#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    string s1[1001],s2[1001];
    if(a>b)cout<<"YES"<<endl;
    else if(a<b)cout<<"NO"<<endl;
    else{
        int count=0;
        for(int i=0;i<a;i++){cin>>s1[i];}
        for(int i=0;i<b;i++){cin>>s2[i];}
        int l1=0,l2=0;
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                if(s1[i]==s2[j])count++;
            }
        }
        if(count%2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
