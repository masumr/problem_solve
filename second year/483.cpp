#include<bits/stdc++.h>
using namespace std;
vector<string>con(string n){
    stringstream ss(n);
    vector<string>ch;
    string c;
    while(ss>>c)ch.push_back(c);
    return ch;
}
int main(){
    string a;
    while(getline(cin,a)){
        vector<string>v=con(a);
        for(int i=0;i<v.size();i++)
        {
            reverse(v[i].begin(),v[i].end());
            cout<<v[i];
            if(i!=v.size()-1) cout<<' ';
        }
        cout<<endl;
    }
}
