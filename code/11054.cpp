#include<cstdio>
#include<stdlib.h>
//using namespace std;
typedef long long int ll;
int main(){
    int n;
    while(scanf("%d",&n) && n){
        ll sum=0;
        ll temp=0;
        while(n--){
            int x;
            scanf("%d",&x);
            temp+=x;
            sum+=abs(temp);
        }
        printf("%lld\n",sum);
    }
}
