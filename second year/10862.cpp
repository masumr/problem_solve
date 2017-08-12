#include<bits/stdc++.h>
using namespace std;
int fib[4005][1009];
vector<string>s;
void fibo(){
    memset(fib,0,sizeof fib);
    fib[0][0]=1;
    fib[1][0]=1;
    int m=1;
    for(int i=2;i<=4000;i++){
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
    s.push_back("1");
    for(int i=3;i<=4000;i+=2){
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
int main(){
    fibo();
    int n;
    while(scanf("%d",&n) && n)cout<<s[n-1]<<endl;
}
