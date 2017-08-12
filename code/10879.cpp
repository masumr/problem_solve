#include<bits/stdc++.h>
using namespace std;
const int size=3500;
bitset<size>p;
int a[2000];
int k;
void sieve(){
    for(int i=3;i*i<=size;i+=2){
        if(p[i]==0){
            for(int j=i*i;j<=size;j+=(i*2)) p[j]=1;
        }
    }
    a[k++]=2;
    for(int i=3;i<=size;i+=2){
        if(p[i]==0)a[k++]=i;
    }
}
int main(){
    int t,n,c=0;
    k=0;
    sieve();
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int xx[5];
        int j=0;
        for(int i=0;i<k;i++){
            if(n%a[i]==0){
                if(j==0) xx[j++]=a[i];
                else{
                    if(xx[0]!=n/a[i]) xx[j++]=a[i];
                }
            }
            if(j==2) break;
        }
        //cout<<xx[0]<<' '<<xx[1]<<endl;
        printf("Case #%d: %d = %d * %d = %d * %d \n",++c,n,xx[0],n/xx[0],n/xx[1],xx[1]);
    }
}
