#include<cstdio>
#include<bitset>
#include<stdlib.h>
#include<string.h>
using namespace std;
const int N=10007;
bitset<70>p;
void sieve(){
    p[0]=1;p[1]=1;
    for(int i=4;i<=70;i+=2)p[i]=1;
    for(int i=3;i*i<=70;i+=2)if(!p[i])for(int j=i*i;j<=70;j+=(i*2))p[j]=1;
}
int a[N];
int main(){
    sieve();
    int mx=0;
    memset(a,0,sizeof a);
    for(int i=1;i<=N;i++){
        for(int j=i;j<=N;j+=i){
            a[j]++;
        }
    }
    /*for(int i=0;i<=30;i++){
        if(!p[i])cout<<i<<' ';
    }*/
    //cout<<a[9996]<<' '<<p[a[9996]]<<endl;
    //for(int i=1;i<=10;i++)cout<<a[i]<<' ';
    int t;
    scanf("%d",&t);
    while(t--){
        int x,y;
        scanf("%d%d",&x,&y);
        if(x>y)swap(x,y);
        bool ck=0,cc=0;
        //cout<<x<<' '<<y<<endl;
        for(int i=x;i<=y;i++){
            int ss=a[i];
            if(!p[ss]){
                if(ck)printf(" ");
                printf("%d",i);
                ck=1;
                cc=1;
            }
        }
        if(!cc)printf("-1");
        printf("\n");
    }
}
