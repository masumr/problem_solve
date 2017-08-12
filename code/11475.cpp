#include<bits/stdc++.h>
using namespace std;
int main(){
    string a;
    while(cin>>a){
        string s=a;
        reverse(s.begin(),s.end());
        if(s==a)cout<<a<<endl;
        else{
            s.erase(0,1);
            cout<<a<<s<<endl;
        }
    }
}
