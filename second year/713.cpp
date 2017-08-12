#include<bits/stdc++.h>
using namespace std;
int main(){
    string a,b;
    int t;
    cin>>t;
    while(t--){
        cin>>a>>b;
        int x=a.size(),y=b.size();
        if(a.size()<b.size())
            for(int i=x;i<y;i++) a+='0';
        else for(int i=y;i<x;i++) b+='0';
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        vector<int>v;
        int temp=0;
        for(int i=a.size()-1;i>=0;i--){
            int sum=(a[i]-48)+(b[i]-48)+temp;
            temp=sum/10;
            v.push_back(sum%10);
        }
        if(temp>0) v.push_back(temp);
        int j;
        for(j=0;j<v.size()-1;j++){
            if(v[j]!=0) break;
        }
        for(int i=j;i<v.size();i++) cout<<v[i];
        cout<<endl;
        v.clear();
    }
}
