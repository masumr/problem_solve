#include<bits/stdc++.h>
using namespace std;
const int N=1444;
int a[N];
int main(){
    int c;
    scanf("%d",&c);
    while(c--){
        int n,t,m,x;
        scanf("%d%d%d",&n,&t,&m);
        for(int i=1;i<=m;i++){
            scanf("%d",&a[i]);
        }
        int tip=m/n;
        int rem=m%n;
        if(rem)tip++;
        if(rem==0)rem=n;
        int sum=0;
        if(n>=m){
            printf("%d 1\n",a[n]+t);
        }
        else{
            sum=a[rem]+t*2;
            //cout<<sum<<endl;
            for(int i=rem+1;i<=m;i+=n){
                int mx=max(sum,a[i+n-1]);
                //cout<<sum<<' '<<i<<' '<<mx<<' '<<a[i+n-1]<<endl;
                sum=mx+(t*2);
            }
            sum-=t;
            printf("%d %d\n",sum,tip);
        }
    }
}
