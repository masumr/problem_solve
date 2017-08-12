#include<bits/stdc++.h>
using namespace std;
map<string,string>mp;
map<string,int>m1;
bool vowel(char ch){
    return (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u');
}
int main(){
   // cout<<vowel('b')<<endl;
    int l,n;
    while(scanf("%d%d",&l,&n)==2){
        for(int i=0;i<l;i++){
            string s1,s2;
            cin>>s1>>s2;
            mp[s1]=s2;
            m1[s1]++;
        }
        for(int i=0;i<n;i++){
            string s;
            cin>>s;
            if(m1[s])cout<<mp[s]<<endl;
            else{
                int len=s.size()-1;
                if(s[len]=='y' && !vowel(s[len-1])){
                    for(int i=0;i<len;i++)cout<<s[i];
                    cout<<"ies"<<endl;
                }
                else if((s[len]=='o')||(s[len]=='s')||(s[len]=='x')){
                    //for(int i=0;i<len;i++)cout<<s[i];
                    cout<<s<<"es"<<endl;
                }
                else if((s[len]=='h' && s[len-1]=='c')||(s[len-1]=='s' && s[len]=='h')){
                   cout<<s<<"es"<<endl;
                }
                else{
                    cout<<s<<"s"<<endl;
                }
            }
        }
        mp.clear();m1.clear();
    }
}
