#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long int ul;
ul a[22];
map<ul,ul>mp;
int main(){
    a[0]=1;
    for(int i=1;i<=20;i++){
        a[i]=(a[i-1]*i);
        mp[a[i]]=i;
    }
    string str;
    vector<char>v;
    int n;
    int t;
    scanf("%d",&t);
    while(t--){
        cin>>str>>n;
        int i;
        int x=str.size();
        int len=a[x]/x;
        cout<<len<<endl;
        n++;
        for(int i=0;i<x;i++){
            int s=(n/len)+((n%len==0)?0:1);
            cout<<s<<' ';
            v.push_back(a[s-1]);
            n-=len;
            if(n<a[x-i-1]){
                for(int j=i+1;j<x;j++)v.push_back(a[j]);
            }
        }
        for(int i=0;i<v.size();i++)cout<<v[i];
        cout<<endl;
        v.clear();
    }
}
