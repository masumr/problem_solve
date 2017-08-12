#include<bits/stdc++.h>
using namespace std;
map<char,char>mp;
int main(){
    string a,b;
    int t;
    scanf("%d",&t);
    getchar();
    getchar();
    while(t--){
        getline(cin,a);
        getline(cin,b);
        for(int i=1;i<=256;i++)mp[(char)i]=(char)i;
        for(int i=0;i<a.size();i++)mp[a[i]]=b[i];
        cout<<b<<endl;
        cout<<a<<endl;
        string s;
        while(getline(cin,s)){
            if(s.size()==0)break;
            for(int i=0;i<s.size();i++){
                printf("%c",mp[s[i]]);
            }
            printf("\n");
        }
        if(t)cout<<endl;
        //getchar();
        mp.clear();
    }
}
