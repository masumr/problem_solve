#include<cstdio>
using namespace std;
int main(){
    int now[14],need[13],t=0,n,i,j;
    while(scanf("%d",&n) && n>=0){
        now[0]=n;
        for(i=1;i<=12;i++)scanf("%d",&now[i]);
        for(j=0;j<12;j++)scanf("%d",&need[j]);
        printf("Case %d:\n",++t);
        for(i=0;i<12;i++){
     //       cout<<now[i]<<' '<<need[i]<<now[i]-need[i]<<' ';
            if(now[i]-need[i]>=0){
                now[i+1]=now[i+1]+now[i]-need[i];
                printf("No problem! :D\n");
            }
            else{
                now[i+1]+=now[i];
                printf("No problem. :(\n");
            }
        }
    }
}
