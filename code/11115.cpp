#include<bits/stdc++.h>
using namespace std;
int a[1000];
int main(){
    int n,k;
    while(scanf("%d%d",&n,&k)&&(n || k)){
        //cout<<n<<' '<<k<<endl;
        int tm=0,m=1;
        a[0]=1;
        for(int i=1;i<=k;i++){
            for(int j=0;j<m;j++){
                int ss=a[j]*n+tm;
                a[j]=ss%10;
                tm=ss/10;
            }
            while(tm){
                a[m++]=tm%10;
                tm/=10;
            }
        }
        for(int i=m-1;i>=0;i--)printf("%d",a[i]);
        printf("\n");
    }
}
