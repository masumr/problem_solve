#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)==1){
        int dig=n*log10(2)+1;
        double r=exp((dig-n)*log(2)+dig*log(5));
        printf("2^-%d = %.3lfe-%d\n",n,r,dig);
    }
}
