#include<bits/stdc++.h>
using namespace std;
map<char,int>mp;
vector<int>v;
map<int,char>mp1;
bool eqal(string n,string r){
    for(int i=0;i<n.size();i++){
        if(n[i]!=r[i])return false;
    }
    return true;
}
string add(string n,string r,int b){
    string s="";
    int sum,carry=0;
    for(int i=0;i<n.size();i++){
        sum=mp[n[i]]+mp[r[i]]+carry;
        carry=sum/b;
        sum%=b;
        s+=mp1[sum];
        //cout<<mp1[sum]<<' ';
        //cout<<carry<<' ';
    }
    if(carry!=0)s+=mp1[carry];
    //cout<<s<<' '<<carry<<endl;
    return s;
}
int main(){
    for(int i=0;i<=9;i++)mp1[i]=(char)(i+48);
    mp1[10]='A';mp1[11]='B';mp1[12]='C';mp1[13]='D';mp1[14]='E';mp1[15]='F';
    for(char i='0';i<='9';i++)mp[i]=(int)(i-48);
    mp['A']=10;mp['B']=11;mp['C']=12;mp['D']=13;mp['E']=14;mp['F']=15;
    string n,r,s;
    while(cin>>n){
        int mx=0;
        s=n;
        for(int i=0;i<n.size();i++)mx=max(mx,mp[n[i]]);
        for(int i=15;i>=2 && i>mx;i--){
            int count=0;
            n=s;
            string r=n;
            reverse(r.begin(),r.end());
            //cout<<add(n,r,i)<<endl;
            while(eqal(n,r)==false){
                count++;
                n=add(n,r,i);
                 //cout<<n<<' ';
                r=n;
                reverse(r.begin(),r.end());
            }
            //cout<<n<<endl;
            //cout<<count<<' ';
            v.push_back(count);
        }
        int i=0;
        for(i=0;i<v.size();i++){
            cout<<v[i];
            if(i!=13)cout<<' ';
        }
        while(i<14){
            cout<<'?';
            if(i!=13)cout<<' ';
            i++;
        }
        cout<<endl;
        v.clear();
    }
}
