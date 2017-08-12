#include<cstdio>
int main(){
    int n,t=0;
    while(scanf("%d",&n)&& n){
        long count=0;
        int tt=1;
        while(tt+1<(n-((tt<<1)+1))){
            int ss=n-(3*tt+2);
           // cout<<ss<<endl;
            //ss-=(tt+1);
            count+=((ss&1)?1:0)+(ss>>1);
            //cout<<(ss/2)+(ss%2)<<endl;
            tt++;
        }
        //cout<<tt<<endl;
        printf("Case %d: %lld\n",++t,count);
    }
}
