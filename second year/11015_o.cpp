#include<bits/stdc++.h>
using namespace std;
const int N=1234567;
int a[N];
int sum[N];
int inf=1000001;
int n;
bool ck(int n){
    int cnt=0;
    for(int i=1;a[i]*a[i]<=n;i++){
        while(n%a[i]==0){
            cnt++;
            n/=a[i];
        }
    }
    if(n>1){
        if(n%4==1)cnt++;
        else return 0;
    }
    //cout<<cnt<<endl;
    if(cnt==2)return 1;
    else return 0;

}
int main(){
    int k=1;
    for(int i=5;i<=inf;i+=4)a[k++]=i;
    int cnt=0;
    for(int i=5;i<=k;i++){
        if(ck(a[i]))cnt++;
        sum[a[i]]=cnt;
    }
    cnt=0;
    for(int i=1;i<=inf;i++){
        cnt=max(cnt,sum[i]);
        sum[i]=cnt;
    }
    while(scanf("%d",&n) && n)printf("%d %d\n",n,sum[n]);
}
