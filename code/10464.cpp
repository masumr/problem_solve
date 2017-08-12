#include<bits/stdc++.h>
using namespace std;
string s1,s2;
void add(string a,string b){
    string a1,a2;
    a1="";
    a2="";
    int i,j;
    for(i=0;i<a.size();i++){
        if(a[i]=='.')break;
        a2+=a[i];
    }
    i++;
    for(j=i;j<a.size();j++)a1+=a[j];
    string b1="",b2="";
    for(i=0;i<b.size();i++){
        if(b[i]=='.')break;
        b2+=b[i];
    }
    i++;
    for(j=i;j<b.size();j++)b1+=b[j];
    if(a1.size()<b1.size()){
        for(i=a1.size();i<b1.size();i++)a1+="0";
    }
    else{
        for(i=b1.size();i<a1.size();i++)b1+="0";
    }
    int ca=0;
    s1="";
    for(i=a1.size()-1;i>=0;i--){
        int sum=(a1[i]-'0')+(b1[i]-'0')+ca;
        s1+=(sum%10+'0');
        ca=sum/10;
    }
    reverse(s1.begin(),s1.end());
    //cout<<s1<<endl;
    if(a2.size()<b2.size()){
        reverse(a2.begin(),a2.end());
        for(i=a2.size();i<b2.size();i++){
            a2+='0';
        }
        reverse(a2.begin(),a2.end());
    }
    else{
        reverse(b2.begin(),b2.end());
        for(i=b2.size();i<a2.size();i++){
            b2+='0';
        }
        reverse(b2.begin(),b2.end());
    }
    //cout<<a2<<' '<<a1<<' '<<b2<<' '<<b1<<endl;
    //cout<
    s2="";
    for(i=a2.size()-1;i>=0;i--){
        int sum=(a2[i]-'0')+(b2[i]-'0')+ca;
        s2+=(sum%10+'0');
        //cout<<sum<<' ';
        ca=sum/10;
    }
    if(ca)s2+=(ca+'0');
    reverse(s2.begin(),s2.end());
    return;
}
int main(){
    int t;
    //add("12.12","23.23");
    scanf("%d",&t);
    while(t--){
        string x,y;
        cin>>x>>y;
        add(x,y);
        cout<<s2<<"."<<s1<<endl;
    }
}
