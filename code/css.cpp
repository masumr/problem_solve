#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    string s;
    cin>>s;
    ll sum=0;
    for(int i=0;i<s.size();i++){
        sum+=(s[i]-'0');
    }
    if(sum%3==0){
        cout<<s<<endl;
    }
    else{
        int m=sum%3;
        int cnt2=0,c1=-1;
        map<int,int>mp;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]%3==m){
                c1=i;
                break;
            }
            else if(s[i]%3 && cnt2<2){
                cnt2++;
                mp[i]=1;
            }
        }
        string sp="";
        bool ck=0;
        //cout<<c1<<endl;
        if(c1!=-1)ck=1;
        else if(cnt2<2){
            cout<<-1<<endl;
            return 0;
        }
        bool lo=0;
        string s9="",s6="";
        for(int i=0;i<s.size();i++){
            if(ck){
                if(i!=c1){
                    if(s[i]!='0')lo=1;
                    s9+=s[i];
                    if(lo)sp+=s[i];
                }
            }
        }
        string sl="";
        lo=0;
        for(int i=0;i<s.size();i++){
            if(cnt2==2){
                if(!mp[i]){
                    s6+=s[i];
                    if(s[i]!='0')lo=1;
                    if(lo)sl+=s[i];
                }
            }
        }
        if(sp.size()==0 && sl.size()==0){
            if(s9.size() || s6.size())cout<<0<<endl;
            else cout<<-1<<endl;
        }
        else{
            if(sp.size()<sl.size())cout<<sl<<endl;
            else if(sp.size()>sl.size())cout<<sp<<endl;
            else {
                bool c1=0,c2=0;
                for(int i=0;i<sl.size();i++){
                    if(sl[i]<sp[i]){
                        c1=1;
                        break;
                    }
                    else if(sl[i]>sp[i]){
                        c2=i;
                        break;
                    }
                }
                if(c1)cout<<sp<<endl;
                else cout<<sl<<endl;
            }
        }
    }
}
