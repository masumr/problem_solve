#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int>mp;
    mp['A']=1;mp['E']=1;mp['I']=1;mp['O']=1;mp['U']=1;mp['Y']=1;
    string a;
    cin>>a;
    int mx=0,count=1;
    for(int i=0;i<a.size();i++){
        //cout<<mp[a[i]]<<' ';
        if(mp[a[i]]){
            mx=max(mx,count);
            count=1;
        }
        if(mp[a[i]]==0) count++;
    }
    mx=max(mx,count);
    cout<<mx<<endl;
}
