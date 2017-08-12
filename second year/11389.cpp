#include<bits/stdc++.h>
using namespace std;
const int N=101;
int a[N];
int b[N];
int main(){
    int n,d,r;
    while(scanf("%d%d%d",&n,&d,&r)==3){
        if(n==0 && d==0 && r==0)break;
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        for(int i=0;i<n;i++)scanf("%d",&b[i]);
        sort(a,a+n);
        sort(b,b+n);
        int k=n-1;
        int sum=0;
        for(int i=0;i<n;i++){
            int ss=a[i]+b[k--];
            if(ss>d)sum+=(ss-d);
        }
        printf("%d\n",sum*r);
    }
}
