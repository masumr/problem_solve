#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int b[10000000];
int main(){
    int t;
    cin>>t;
    int s1=0,s2=0;
    for(int i=0;i<t;i++){
        cin>>a[i]>>b[i];
        s1+=a[i];
        s2+=b[i];
    }
    int sum=abs(s1-s2);
    int mx=0;
    for(int i=0;i<t;i++){
        int sum1=(s1-a[i])+b[i];
        int sum2=(s2-b[i])+a[i];
        if(sum<abs(sum1-sum2)){
            sum=abs(sum1-sum2);
            mx=i+1;
        }
    }
    cout<<mx<<endl;
}
