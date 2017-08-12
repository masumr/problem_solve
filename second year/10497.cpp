#include<bits/stdc++.h>
using namespace std;
int fib[805][2009];
vector<string>s;
void fibo(){
    memset(fib,0,sizeof fib);
    fib[0][0]=1;
    fib[1][0]=1;
    fib[2][0]=2;
    int m=1;
    for(int i=3;i<=800;i++){
        int ca=0;
        for(int j=0;j<m;j++){
            int sum=fib[i-1][j]+fib[i-2][j]+ca;
            fib[i][j]=sum%10;
            ca=sum/10;
        }
        while(ca){
            fib[i][m]=ca%10;
            ca/=10;
            m++;
        }
        ca=0;
        for(int j=0;j<m;j++){
            int sum=(fib[i][j]*(i))+ca;
            //cout<<fib[i][j];
            fib[i][j]=sum%10;
            ca=sum/10;
        }
        //cout<<endl;
        while(ca){
            fib[i][m]=ca%10;
            ca/=10;
            m++;
        }
    }
    s.push_back("1");
    for(int i=2;i<=800;i++){
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
    while(scanf("%d",&n)){
          if(n==-1)break;
            if(n==1)printf("0\n");
            else cout<<s[n-2]<<endl;
    }
}

