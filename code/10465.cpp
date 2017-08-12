#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,t;
    while(scanf("%d%d%d",&n,&m,&t)==3){
        int sum=0;
        int mn=min(n,m);
        int mx=max(n,m);
        int count=0;
        int m1=1000000,m2=0;
        while(sum<=t){
            int kk=t-sum;
            if(kk%mn<m1){
                m1=kk%mn;
                m2=count+kk/mn;
            }
            else if(kk%mn==m1){
                if(kk/mn+count>m2){
                    m2=kk/mn+count;
                }
            }
            count++;
            sum+=mx;
        }
         if(m1){
            printf("%d %d\n",m2,m1);
        }
        else printf("%d\n",m2);
    }
}
