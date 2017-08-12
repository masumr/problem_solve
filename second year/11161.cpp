#include<bits/stdc++.h>
using namespace std;
int fib[4005][1009];
vector<string>s;
void fibo(){
    memset(fib,0,sizeof fib);
    fib[0][0]=1;
    fib[1][0]=1;
    int m=1;
    for(int i=2;i<=3003;i++){
        int ca=0;
        for(int j=0;j<m;j++){
            int sum=fib[i-1][j]+fib[i-2][j]+ca;
            fib[i][j]=sum%10;
            ca=sum/=10;
        }
        while(ca){
            fib[i][m]=ca%10;
            ca/=10;
            m++;
        }
    }
    s.push_back("0");
    s.push_back("1");
    s.push_back("1");
    for(int i=2;i<=3003;i++){
        int j=m;
        while(fib[i][j]==0)j--;
        string ss="";
        for(int k=j;k>=0;k--){
            ss+=(fib[i][k]+'0');
        }
        s.push_back(ss);
        ss.clear();
    }
}
string add(string s,string b){
    string ss=b;
    for(int i=b.size();i<s.size();i++){
        ss+='0';
    }
    int ca=0;
    string sk="";
    reverse(ss.begin(),ss.end());
    //cout<<ss<<' '<<s<<endl;
    for(int i=s.size()-1;i>=0;i--){
        int sum=(s[i]-'0')+(ss[i]-'0')+ca;
        sk+=(sum%10+'0');
        ca=sum/10;
    }
    if(ca)sk+=(ca+'0');
    reverse(sk.begin(),sk.end());
    return sk;
}
string divide(string s,int b){
    int rem=0;
    string dv="";
    for(int i=0;i<s.size();i++){
        int dd=(s[i]-'0'+rem*10);
        dv+=(dd/b+'0');
        rem=dd%b;
    }
    return dv;
}
string subtract(string s,string b){
     string ss=b;
    for(int i=b.size();i<s.size();i++){
        ss+='0';
    }
    int ca=0;
    string sk="";
    reverse(ss.begin(),ss.end());
    for(int i=s.size()-1;i>=0;i--){
        int s1=(s[i]-'0');
        int s2=ss[i]-'0'+ca;
        if(s1<s2){
            s1+=10;
            ca=1;
        }
        else{
            ca=0;
        }
        int dif=s1-s2;
        sk+=dif+'0';
    }
    reverse(sk.begin(),sk.end());
    return sk;
}
int main(){
    fibo();
    for(int i=0;i<10;i++)cout<<s[i]<<' ';
    int n,c=0;
    while(scanf("%d",&n) && n){
        printf("Set %d:\n",++c);
        string vv=s[n+1];
        string sk=s[n-1];
        int val=sk[sk.size()-1]-'0';
        if(val%2)sk=add(sk,"1");
        string ss=add(vv,divide(sk,2));
        cout<<subtract(ss,"1")<<endl;
    }
}

