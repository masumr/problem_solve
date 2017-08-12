#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>>s1>>s2;
    if(s1==s2)cout<<0<<endl;
    else{
        if(s1.size()==1){
            cout<<1<<endl;
            cout<<s1[0]<<' '<<s2[0]<<endl;
            return 0;
        }
        set<char>st;
        vector<pair<char,char> >ch;
        map<char,char>mp;
        int c1=0,c2=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                 if(mp[s1[i]]!=s2[i]){
                    c1++;
                    //cout<<s1[i]<<' '<<s2[i]<<' ';
                }
                if(mp[s1[i]]!=s2[i]&&mp[s2[i]]!=s1[i]){
                    ch.push_back(make_pair(s1[i],s2[i]));
                    mp[s1[i]]=s2[i];
                    //mp[s2[i]]=s1[i];
                }
                c2++;
                //cout<<s1[i]<<' '<<s2[i]<<endl;
            }
            st.insert(s1[i]);
            st.insert(s2[i]);
        }
        //cout<<c1<<' '<<c2<<endl;
        if(c1==c2 && st.size()==c1)cout<<-1<<endl;
        else{
            cout<<ch.size()<<endl;
                for(int i=0;i<ch.size();i++){
                    cout<<ch[i].first<<' '<<ch[i].second<<endl;
                }

        }
    }
}
