#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        string s;
        cin>>s;
        bool ck=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='r'){
                ck=1;
                break;
            }
        }
        if(!ck)cout<<"Vely easy"<<endl;
        else cout<<"Not vely easy"<<endl;
    }
}
