#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    string b="CODEFORCES";
    string c=b;
    reverse(c.begin(),c.end());
    cin>>s;
    int k=0;
    for(int i=0;i<s.size();i++){if(b[k]==s[i])k++;else break;}
    int k1=0;
    for(int i=s.size()-1;i>=0;i--){if(c[k1]==s[i])k1++;else break;}
    if(k1+k>=10)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
