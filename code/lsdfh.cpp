#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main(){
    string a;
    mp['a']=1;mp['e']=1;mp['i']=1;mp['o']=1;mp['u']=1;mp['y']=1;
    int t;
    cin>>t;
    vector<int>v;
    for(int i=0;i<t;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    int c=0;
    int k=0;
    getchar();
    for(int i=0;i<t;i++){
        getline(cin,a);
        int count=0;
        for(int i=0;i<a.size();i++){
            if(mp[a[i]]==1) count++;
        }
        if(v[i]==count) c++;
    }
    cout<<endl;
    if(c==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

}
