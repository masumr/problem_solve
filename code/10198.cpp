#include <cstdio>
typedef long long int ll;
int main(){
    ll M[1001];
    M[0]=2;M[1]=5;M[2]=13;
    for(int i=3;i<1001;i++)
        M[i]=2*M[i-1]+M[i-2]+M[i-3];
    int n;
    while(scanf("%d",&n)==1)printf("%lld\n",M[n-1]);
}
