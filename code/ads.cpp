#include<bits/stdc++.h>
using namespace std;
vector<string>v;
string its(int n){
    stringstream ss;
    string s;
    ss<<n;
    ss>>s;
    return s;
}
int main(){
    v.push_back("0");
    v.push_back("8");
    for(int i=16;i<=1000;i+=8){
        string b=its(i);
        int count=0;
        for(int i=0;i<=b.size();i++){
            if(b[i]=='8')count++;
        }
        if(count==0)v.push_back(b);
    }
    int c=0;
    string a;
    cin>>a;
    for(int i=0;i<v.size();i++){
        int count=0;
        if(c)break;
        int ss=0;
        for(int j=0;j<v[i].size();j++){
            if(c)break;
            for(int k=ss;k<a.size();k++){
                if(v[i][j]==a[k]){
                        count++;
                        ss=k+1;
                        break;
                }
            }
        }
        //cout<<count<<' '<<v[i]<<' '<<endl;;
        if(count==v[i].size()){
            cout<<"YES"<<endl<<v[i]<<endl;
            c++;
        }
    }
    if(c==0)cout<<"NO"<<endl;
}
