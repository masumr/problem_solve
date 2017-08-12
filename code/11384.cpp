#include<cstdio>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)==1){
        int count=0;
        while(n!=0){
            n>>=1;
            count++;
        }
        printf("%d\n",count);
    }
}
