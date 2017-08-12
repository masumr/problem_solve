#include<algorithm>
#include<cstdio>
using namespace std;
const int N=10009;
long long a[N];
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        //memset(a,0,sizeof a);
        int count=1;
        //map<long long,int>mp;
        for(int i=0;i<n;i++){
            scanf("%lld",&a[i]);
        }
        sort(a,a+n);
        for(int i=1;i<n;i++){
            if(a[i]!=a[i-1])count++;
        }
        printf("Case %d: %d\n",++c,count);
    }
}
