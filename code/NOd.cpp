#include<bits/stdc++.h>
using namespace std;
const int size=1000001;
int a[size],s[size];
int main(){
    a[1]=1;
    memset(a,0,sizeof a);
    for(int i=1;i<=1000001;i++){
        for(int j=i;j<=1000001;j+=i)a[j]++;
    }
    s[0]=1;
    s[1]=2;
    int k=2;
    while(k<=1000001){
        s[k]=s[k-1]+a[s[k-1]];
        if(s[k]>=1000001) {
            cout<<s[k-1]<<' '<<s[k]<<endl;
            break;
        }
        k++;
    }
    cout<<s[99999]<<endl;
    //for(int i=0;i<=20;i++)cout<<s[i]<<' ';
    cout<<endl;
}
