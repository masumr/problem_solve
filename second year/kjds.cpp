#include<bits/stdc++.h>

using namespace std;
int gcd(int a,int b){
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
   int a,b,c,d;
   cin>>a>>b>>c>>d;
   int sum=1234567;
   bool ck=0;
   int s1=b,s2=d;
    while(s1!=s2){
            if(s1<s2)
                s1+=a;
            else
                s2+=c;
        if(s1>sum && s2>sum){
            ck=1;
            break;
        }
   }
   if(ck) cout<<-1<<endl;
   else cout<<s1<<endl;
}
