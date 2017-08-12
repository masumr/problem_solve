#include<bits/stdc++.h>
using namespace std;
map<string,double>mp;
int main(){
    int n,m;
    double x;
    string a;
    cin>>n>>m;
    getchar();
    while(n--){
        cin>>a;
        cin>>x;
        mp[a]=x;
    }
    getchar();
    int c=0;
    while(m--){
        //cout<<1<<endl;
        string s,sd;
        getline(cin,a);
        double ans=0;
        stringstream ss(a);
        while(ss>>s) ans+=mp[s];
        string s1="",s2="";
        for(int i=0;i<sd.size();i++){
            if(a[i]=='='|| a[i]=='>' || sd[i]=='<'){
                while(sd[i]=='='|| sd[i]=='>' || sd[i]=='<')s1+=sd[i++];
                while((sd[i]>='0' && sd[i]<='9') || sd[i]=='.') s2+=sd[i++];
            }
        }

        //cout<<s1<<' '<<s2<<endl;
        //printf("Guess #%d ",++c);
        double num=atof(s2.c_str());
        int count=0;
        if(s1=="=")if(ans==num) count++;
        else if(s1==">") if(ans>num)count++;
        else if(s1=="<")if(ans<num)count++;
        else if(s1==">=")if(ans>=num)count++;
        else {if(ans<=num)count++;}
        if(!count) printf("Guess #%d was incorrect.\n",++c);
        else printf("Guess #%d was correct.\n",++c);
        mp.clear();
    }
}
