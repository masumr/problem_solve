#include<bits/stdc++.h>
using namespace std;
int x[11];
int gcd(int a,int b) { return (b==0)?a:gcd(b,a%b);}
int main() {
    x[0]=1;
    for(int i=1;i<=9;i++) x[i]=x[i-1]*10;
    int c=0,n;
    while (cin>>n && n>=0){
        string s;
        int p=0,q=0;
        cin>>s;
        int l=s.size()-1;
        for(int  i=2;i<=l;i++)p =p*10+((int)s[i]-48);
        cout<<p<<endl;
        if(n){
            p = p-p/x[n];
            q =x[l-1]-x[l-n-1];
        }
        else q=x[l-1];
        int g=gcd(p,q);
        printf("Case %d: %d/%d\n",++c,p/g,q/g);
    }
}

