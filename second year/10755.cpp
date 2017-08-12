#include<cstdio>
using namespace  std;
int main()
{
    int t;
    long x;
    scanf("%d",&t);
    while(t--){
        printf("\n");
        int a,b,c;
        scanf("%d%d%d",&a,&b,&c);
        a=a*b*c;
        long sum=0,mx=-100000000000000;
        for(int i=0;i<a;i++){
            scanf("%lld",&x);
            sum+=x;
            mx=(mx<sum)?sum:mx;
            if(sum<0)sum=0;
        }
        printf("%d\n",mx);
    }
}
