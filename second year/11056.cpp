#include<bits/stdc++.h>
using namespace std;
struct node{
    string ss,sk;
    int m,s,ms;
};
bool compare(node a,node b){
    if(a.m<b.m)return true;
    else if(a.m==b.m){
        if(a.s<b.s)return true;
        else if(a.s==b.s){
            if(a.ms<b.ms)return true;
            else if(a.ms==b.ms){
                if(a.sk<b.sk)return true;
                else return false;
            }
            else return false;
        }
        else return false;
    }
    else return false;
}
vector<node>v;
int main(){
    int n;
    while(scanf("%d",&n)==1){
        string s1,s2,s3,s4,s5,s6;
        int a,b,c;
        while(n--){
            cin>>s1>>s2>>a>>s3>>b>>s4>>c>>s5;
            s6="";
            for(int i=0;i<s1.size();i++){
                if(s1[i]>='A' && s1[i]<='Z')s6+=(s1[i]+32);
                else if(s1[i]>='a' && s1[i]<='z')s6+=(s1[i]-32);
                else s6+=s1[i];
            }
            node nd;
            nd.ss=s1;nd.m=a;nd.s=b;nd.ms=c;nd.sk=s6;
            v.push_back(nd);
        }
        sort(v.begin(),v.end(),compare);
        int r=0;
        for(int i=0;i<v.size();i++){
            if(i%2==0)printf("Row %d\n",++r);
            cout<<v[i].ss<<endl;
        }
        cout<<endl;
        v.clear();
    }
}
