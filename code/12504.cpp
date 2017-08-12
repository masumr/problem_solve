#include<bits/stdc++.h>
using namespace std;
map<string,string>m1,m2;
vector<string>v2,v3,v4;
set<string>v1;
int main(){
    string a,b;
    int t;
    cin>>t;
    while(t--){
        cin>>a;
        cin>>b;
        string s1,s2;
        for(int i=1;i<a.size()-1;i++){
            s1="";
            s2="";
            while(a[i]!=':')s1+=a[i++];
            while(a[i]!=',' && a[i]!='}') s2+=a[i++];
            //cout<<s1<<' '<<s2<<endl;
            m1[s1]=s2;
            v1.insert(s1);
        }
        for(int i=1;i<b.size()-1;i++){
            s1="";
            s2="";
            while(b[i]!=':')s1+=b[i++];
            while(b[i]!=',' && b[i]!='}') s2+=b[i++];
            m2[s1]=s2;
            v1.insert(s1);
        }
        int count=0;
        for(set<string>::iterator i=v1.begin();i!=v1.end();i++){
            if(m1[*i]==""){
                v2.push_back(*i);
                count++;
            }
            if(m2[*i]==""){
                v3.push_back(*i);
                count++;
            }
            if(m1[*i]!=m2[*i] && m1[*i]!="" && m2[*i]!=""){
                v4.push_back(*i);
                count++;
            }
        }
        if(count==0)cout<<"No changes"<<endl;
        else{
            if(v2.size()!=0) cout<<'+';
            for(int i=0;i<v2.size();i++){
                cout<<v2[i];
                if(i!=v2.size()-1)cout<<',';
            }
            if(v2.size()!=0)cout<<endl;
            if(v3.size()!=0) cout<<'-';
            for(int i=0;i<v3.size();i++){
                cout<<v3[i];
                if(i!=v3.size()-1)cout<<',';
            }
            if(v3.size()!=0)cout<<endl;
            if(v4.size()!=0) cout<<'*';
            for(int i=0;i<v4.size();i++){
                cout<<v4[i];
                if(i!=v4.size()-1)cout<<',';
            }
            if(v3.size()!=0)cout<<endl;
        }
        if(t)cout<<endl;
        v1.clear();v2.clear();v3.clear();v4.clear();m1.clear();m2.clear();
    }
}

