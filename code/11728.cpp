#include<bits/stdc++.h>
using namespace std;
int a[1001];
void fact(){
     int i,j;
     memset(a,0,sizeof a);
     for(i=1;i<=1000;i++)for(j=1;j<=i;j++)if(i%j==0)a[i]+=j;
}

int main(){
    fact();
    int k,r,i,j,n,t=0;
    while(scanf("%d",&n) && n!=0){
        printf("Case %d: ",++t);
        r=0;
            for(i=1000;i>=1;i--)
       {
       if(a[i]==n)
           {
           printf("%d\n",i);
           r++;
           break;
           }
       }

    if(r==0)
    printf("-1\n");
    }
}
