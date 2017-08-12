#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    long long a[100000],n,i=0,l;
    while(scanf("%d",&n)==1){
        a[i]=n;
        sort(a,a+i+1);
        if(i%2==0)
            printf("%lld\n",a[i/2]);
        else{
            l=a[i/2]+a[i/2+1];
            printf("%lld\n",l/2);
        }
        i++;
    }
}
