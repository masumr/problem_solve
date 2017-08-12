#include<cstdio>
#include<bitset>
#include<string.h>
#include<math.h>
//const int size=100000007;
unsigned int  p[100000007];
int main(){
    memset(p,0,sizeof p);
    for(int i=1;i<=21;i++){
        unsigned int sum=pow(i,6);
        p[sum]=1;
    }
    unsigned int n;
    while(scanf("%u",&n) && n){
        if(p[n])printf("Special\n");
        else printf("Ordinary\n");
    }
}
