#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int rad(string s,int a){
    int x=s.size();
    int r;
    for(int i=0;i<x;i++) r=(r*10+(s[i]-48))%a;
    return r;
}
int main(){
    string a;
    int t;
    cin>>t;
    while(t--){
        cin>>a;
        int n;
        cin>>n;
        int count=0;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            if(rad(a,x)==0) count++;
        }
        cout<<a;
        if (count==n) puts(" - Wonderful.");
        else puts(" - Simple.");
    }
}
