#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    while(cin>>s1){
        cin>>s2;
        int k=0;
        for(int i=0;i<s2.size();i++){
            if(s2[i]==s1[k])k++;
        }
        if(k==s1.size())cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
