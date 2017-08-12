#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    unsigned int n,m;
    while(scanf("%u%u",&n,&m)==2)printf("%u\n",(m>n)?(m-n):(n-m));
}
