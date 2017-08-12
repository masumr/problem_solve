#include<cstdio>
using namespace std;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        double sum=0;
        while(n--){
            float s;
            int x;
            scanf("%f %d",&s,&x);
            sum+=(s*x);
        }
        int m;
        scanf("%d",&m);
        int ss=m-sum;
        printf("Case %d: %lld\n",++c,ss);
    }
}
