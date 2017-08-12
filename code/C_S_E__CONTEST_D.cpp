#include<bits/stdc++.h>
using namespace std;
int main(){
    map<char,int>mp;
    string a;
    while(cin>>a){
        mp.clear();
        for(int i=0;i<a.size();i++){
            mp[a[i]]++;
        }
        int count=0;
        for(int i=0;i<a.size();i++){
            if(mp[a[i]]%2){
                cout<<a[i];
                count++;
            }
        }
        if(!count) cout<<-1;
        cout<<endl;
    }
}
