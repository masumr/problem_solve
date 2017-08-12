#include<bits/stdc++.h>
using namespace std;
vector<string>v;
bool cheack(string s){
    string pp="Sharif";
    if(pp.size()>s.size())return false;
    int k=0;
    for(k=0;k<s.size();k++){
        if((s[k]>='A' && s[k]<='Z')&&(s[k]>='a' && s[k]<='z')){
            break;
        }
    }
    k--;
    for(int i=k;i<k+pp.size();i++){
        if(s[i]!=pp[i-k])return false;
    }
    if(pp.size()!=s.size()){
        for(int i=k+pp.size();i<s.size();i++){
            if((s[i]>='A' && s[i]<='Z')&&(s[i]>='a' && s[i]<='z')){
                    return false;
               }
        }
    }
    return true;
}
int main()
{
     int t,c=0;
     scanf("%d",&t);
     getchar();
     string spp="Officer";
     string vp="Sharif";
     while(t--){
        string s;
        getline(cin,s);
        char ch=' ';
        string sk="";
        for(int i=0;i<s.size();i++){
            if(s[i]==ch){
                int cnt=0;
                if(cheack(sk)){
                    string vv="";
                    int k=0;
                    for(k=0;k<sk.size();k++){
                        if((s[k]>='A' && s[k]<='Z')&&(s[k]>='a' && s[k]<='z')){
                            break;
                        }
                        else vv+=s[i];
                    }
                    vv+=spp;
                    k+=spp.size();
                    for(int j=k;j<sk.size();j++){
                        vv+=sk[j];
                    }
                    sk=vv;
                    vv.clear();
                }
                v.push_back(sk);
                sk.clear();
            }
            else{
                sk+=s[i];
            }
        }
        if(sk.size()){
            if(cheack(sk)){
                    string vv="";
                    int k=0;
                    for(k=0;k<sk.size();k++){
                        if((s[k]>='A' && s[k]<='Z')&&(s[k]>='a' && s[k]<='z')){
                            break;
                        }
                        else vv+=s[k];
                    }
                    vv+=spp;
                    k+=spp.size();
                    for(int i=k;i<sk.size();i++){
                        vv+=sk[i];
                    }
                    sk=vv;
                    vv.clear();
                }
                v.push_back(sk);
                sk.clear();
        }
        printf("Case %d: ",++c);
        for(int i=0;i<v.size();i++){
            cout<<v[i];
            if(i!=v.size()-1)cout<<' ';
        }
        cout<<endl;
        v.clear();
     }
}

