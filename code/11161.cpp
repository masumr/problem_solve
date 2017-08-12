#include<bits/stdc++.h>
using namespace std;
#define lim 1510
#define len 400
int fib[lim][len];
void fibb(){
    fib[0][0]=0;
    fib[1][0]=1;
    fib[2][0]=2;
    int n=1;
    for(int i=3;i<lim;i++){
        for(int j=0;j<len;j++){
            fib[i][j]+=fib[i-1][j]+fib[i-2][j];
            if(fib[i][j]>=10){
                fib[i][j+1]=fib[i][j]/10;
                fib[i][j]%=10;
            }
        }
    }
}
string adt(string a,string b){
    reverse(b.begin(),b.end());
    for(int i=b.size();i<a.size();i++){
        b+="0";
    }
    reverse(b.begin(),b.end());
    return b;
}
string addition(string a,string b){
    int carry=0;
    int j;
    if(a.size()<b.size())a=adt(b,a);
    else b=adt(a,b);
    string cc="";
    int k=0;
    //cout<<1<<endl;
    for(j=a.size()-1;j>=0;j--){
        int tm=(((a[j]-'0')+(b[j]-'0')+carry)/10);
        cc+=(((a[j]-'0')+(b[j]-'0')+carry)%10)+'0';
        carry=tm;
    }
    if(carry>0){
        cc+=(carry+'0');
    }
    reverse(cc.begin(),cc.end());
    //cout<<cc<<endl;
    return cc;
}
string divide(string a,int i){
    //if(i%2)a[a.size()-1]+=1;
    int rem=0;
    string b="";
    for(int i=0;i<a.size();i++){
        b+=(((rem*10+(a[i]-'0'))/2)+'0');
        rem=((a[i]-'0')+rem)%2;
    }
    //if(i%2) a=addition(b,"1");
    a=addition(b,"0");
    return a;
}
int main(){
    vector<string>s;
    int j,i;
    fibb();
    for(i=0;i<lim;i++){
        string sa="";
        for(j=len-1;j>0;j--)if(fib[i][j]!=0)break;
        while(j>=0){
            sa+=(char)(fib[i][j]+48);
            j--;
        }
      s.push_back(sa);
    }
    string sum="0";
    vector<string>v;
    v.push_back(sum);
   // cout<<addition("12","7")<<endl;
    //cout<<divide("12",0)<<endl;
    //cout<<addition("12",divide("13",1))<<endl;
    for(int i=1;i<=15;i++){
        int k=0;
        string sss=s[i];
        string sb=divide(sss,i);
        v.push_back(addition(sum,sb));
        sum=addition(sum,sss);
        cout<<sb<<' '<<sum<<' '<<v[i-1]<<endl;
    }
    cout<<endl;
   // for(int i=0;i<5;i++)cout<<v[i]<<' ';

}
