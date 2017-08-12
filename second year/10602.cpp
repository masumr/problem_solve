#include<bits/stdc++.h>
using namespace std;
string s;
vector<string>v;
int cnt(string a,string b){
    for(int i=0;i<b.size();i++){
        if(a[i]!=b[i]){
            //cout<<i<<' '<<b.size()<<endl;
            return (b.size()-(i));
        }
    }
    return 0;
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        cin>>s;
        int len=s.size();
        v.push_back(s);
        for(int i=1;i<n;i++){
            cin>>s;
            int mx=1234567;
            for(int j=0;j<v.size();j++){
                mx=min(mx,cnt(v[j],s));
                //cout<<cnt(v[j],s)<<' ';
            }
            //cout<<endl;
            len+=mx;
            v.push_back(s);
        }
        sort(v.begin(),v.end());
        printf("%d\n",len);
        for(int i=0;i<v.size();i++)cout<<v[i]<<endl;
        v.clear();
    }
}
