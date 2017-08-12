#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    cin>>a;
    int count=0;
    int i=0;
    int j=0;
    vector<int>v;
    while(a[i]!='B' and i<a.size())i++;
    if(i!=0) i--;
    for(;i<a.size();i++){
        if(a[i]=='B') count++;
        else if(a[i]=='W' and count!=0){
            v.push_back(count);
            count=0;
            j++;
        }
    }
    if(count!=0) {
        v.push_back(count);
    }
    if(v.size()) {
            cout<<v.size()<<endl<<endl;
            for(int i=0;i<v.size();i++)
            {
                cout<<v[i];
                if(i!=v.size()-1) cout<<' ';
                else cout<<endl;
            }
    }
    else cout<<0<<endl;
}
