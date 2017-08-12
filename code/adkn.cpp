#include<cstdio>
#include<algorithm>
using namespace std;
int a[2000001];
int main(){
    int n;
    while(scanf("%d",&n) and n!=0){
        int t=n;
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        sort(a,a+n);
        for(int i=0;i<n;i++){
            printf("%d",a[i]);
            if(i!=n-1)printf(" ");
        }
        printf("\n");
    }
}
