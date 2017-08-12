#include<iostream>
#include<map>
#include<string>
using namespace std;
map<string,string>mp;
int main(){
    string a,b;
    int n;
    cin>>n;
    getchar();
    while(n--){
        getline(cin,a);
        getline(cin,b);
        mp[a]=b;
    }
    //cout<<mp[a]<<endl;
    int t;
    cin>>t;
    string c;
    getchar();
    while(t--){
        getline(cin,c);
        cout<<mp[c]<<endl;
    }
    mp.clear();
}
