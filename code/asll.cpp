#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int n;
    map<string,int>mp;
    cin>>n;
    while(n--){
        cin>>s;
        if(!mp[s]){
            cout<<"OK"<<endl;
        }
        else{
            cout<<s<<mp[s]<<endl;
        }
        mp[s]++;
    }
}
