#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n,m;
    cin>>n>>m;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n-1;i++){
        if(s[i]=='.' && s[i+1]=='.')cnt++;
    }
    while(m--){
        int x;
        char ch;
        cin>>x>>ch;
        if(ch=='.'){
            if(s[x-1]!='.'){
                if(s[x]=='.' && x<n)cnt++;
                if(s[x-2]=='.' && x>1)cnt++;
            }
        }
        else{
            if(s[x-1]=='.'){
                if(s[x]=='.' && x<n)cnt--;
                if(s[x-2]=='.' && x>1)cnt--;
            }

        }
        s[x-1]=ch;
        cout<<cnt<<endl;
    }
}
