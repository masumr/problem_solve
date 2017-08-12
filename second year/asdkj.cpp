#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
int main(){
    mp['a']=1;mp['e']=1;mp['i']=1;mp['o']=1;mp['u']=1;mp['y']=1;
    mp['A']=1;mp['E']=1;mp['I']=1;mp['O']=1;mp['U']=1;mp['Y']=1;
    int t;
    while(scanf("%d",&t)==1){
    while(t--){
        string s;
        cin>>s;
        int f1=0,l1=s.size()-1;
        string sk="";
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]){
                    sk+=s[i];
                    f1++;
            }
            else break;
        }
        for(int i=s.size()-1;i>=f1;i--){
            if(mp[s[i]])l1--;
            else break;
        }
        for(int i=f1;i<=l1;i++){
            if(!mp[s[i]])sk+=s[i];
        }
        cout<<sk;
        //cout<<s[l1]<<endl;
        for(int i=l1+1;i<=s.size();i++)cout<<s[i];
        cout<<endl;
    }
    }
}
