#include<bits/stdc++.h>
using namespace std;
int a[10000000];
int main(){
    int n;
    while(cin>>n){
        int temp=0;
        int m=1;
        a[0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<m;j++){
                int sum=a[j]*i+temp;
                a[j]=sum%10;
                temp=sum/10;
            }
            while(temp>0){
                a[m]=temp%10;
                temp/=10;
                m++;
            }
        }
        int j=0;
        for(int i=0;i<m;i++)
        {
               if(a[i]!=0){
                    j=i;
                    break;
               }
        }
        printf("%5d->%d\n",n,a[j]);
    }
}
