#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string s,s1,s2,s3;
    cin>>n;
    cin>>s;
    int cnt=0;
    for(int i=0;i<n;i++){
        cin>>s1;
       // cout<<s1<<endl;
        //cout<<s1[0]<<' '<<s1[1]<<' '<<s1[2]<<endl;
        s2="";s3="";
        for(int i=0;i<3;i++)s2+=s1[i];
        for(int i=5;i<8;i++)s3+=s1[i];
        //cout<<s2<<' '<<s3<<' '<<s<<endl;
        if(s2==s)cnt++;
        if(s3==s)cnt--;
    }
    //cout<<cnt<<endl;
    if(cnt==0)cout<<"home"<<endl;
    else cout<<"contest"<<endl;
}
