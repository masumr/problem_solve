#include<bits/stdc++.h>
using namespace std;
int fib[501][501];
void fb(){
    fib[0][0]=0;
    fib[1][0]=1;
    fib[2][0]=1;
    for(int i=3;i<=500;i++){
        for(int j=0;j<=500;j++){
            fib[i][j]+=fib[i-2][j]+fib[i-1][j];
            if(fib[i][j]>=10){
                fib[i][j+1]=fib[i][j]/10;
                fib[i][j]%=10;
            }
        }
    }
}
int main(){
    fb();
    vector<string>v;
    string s;
    int j;
    for(int i=1;i<=500;i++){
        s="";
        for(j=500;j>0;j--) if(fib[i][j]!=0) break;
        while(j>=0){
            s+=((char)fib[i][j]+48);
            j--;
        }
        v.push_back(s);
    }
    string a,b,num;
    while(cin>>a>>b){
        if(a[0]==0 && b[0]==0 && a.size()==1 && b.size()==1) break;
        int s1,s2;
        int x=a.size();
        int y=b.size();
        for(int i=0;i<v.size();i++)
        {
            num=v[i];
           if(num.size()==x){
                s1=i;
                break;
            }
        }

        while(1){

            for(int i=0;i<x;i++){
                if(a[i]<)
            }
        }
       /* for(int i=0;i<v.size();i++){
            if(v[i]>=b){
                s2=i;
                break;
            }
        }
        cout<<s2-s1<<endl;*/
    }
}
