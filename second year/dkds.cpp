#include<cstdio>
//using namespace std;
typedef unsigned long long int ll;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        ll n;
        scanf("%lu",&n);
        ll s=n*3;
        printf("Case #%d: ",++c);
        if(n&1) printf("%lu %lu %lu\n",s-2,s-1,s);
        else printf("%lu %lu %lu\n",s,s-1,s-2);
    }
}
