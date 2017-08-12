#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
string ss;
void binary(int  n){
    if(n<=1){
        ss+=(n+'0');
        return;
    }
    int rem=n%2;
    binary(n/2);
    ss+=(rem+'0');
}
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        ss="";
        binary(n);
        printf("%d ",n);
        cout<<ss<<endl;
        if(ss.size()<3){
            string sk="";
            for(int i=ss.size()+1;i<=3;i++)sk+='0';
            sk+=ss;
            cout<<sk<<endl;
        }
        else{
            int l=ss.size()-1;
            string sk="";
            sk+=ss[l-2];
            sk+=ss[l-1];
            sk+=ss[l];
            cout<<sk<<endl;
        }
    }
}
