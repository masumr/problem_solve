#include<bits/stdc++.h>
using namespace std;
int a[30000];
vector<string>v;
string divide(string s,int n){
    int rem=0;
    string sk="";
    for(int i=0;i<s.size();i++){
        int sum=((s[i]-'0')+rem*10);
        rem=sum%n;
        sum/=n;
        sk+=(sum+'0');
    }
    string sv="";
    int i=0;
    while(sk[i]=='0')i++;
    while(i<sk.size()){
        sv+=sk[i];
        i++;
    }
    return sv;
}
int main(){
    v.push_back("1");
    int m=1;
    a[0]=1;
    for(int i=1;i<=2001;i++){
        int carry=0;
        for(int j=0;j<m;j++){
            int sum=a[j]*i+carry;
            a[j]=sum%10;
            carry=sum/10;
        }
        while(carry){
            a[m]=carry%10;
            carry/=10;
            m++;
        }
        string sk="";
        for(int i=m-1;i>=0;i--)sk+=(a[i]+'0');
        v.push_back(sk);
        sk.clear();
    }
    //cout<<v[1000]<<endl;
    int n;
    while(scanf("%d",&n)==1){
        string sv=v[2*n];
        for(int i=2;i<=n+1;i++){
            sv=divide(sv,i);
            //sv=divide(sv,i);
        }
        //sv=divide(sv,n+1);
        cout<<sv<<endl;
    }
}
