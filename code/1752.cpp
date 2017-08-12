#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long LLU;
int mark[500] = {};
void sieve() {
    int i, j;
    mark[1] =  1;
    for(i = 2; i < 100; i++) {
        if(mark[i] == 0) {
            for(j = i+i; j < 100; j += i)
                mark[j] = 1;
        }
    }
}
LLU mpow(LLU x, LLU y) {
    if(y == 0)   return 1;
    if(y&1)
        return x*mpow(x*x, y>>1);
    return mpow(x*x, y>>1);
}
int main() {
    sieve();
    int i, j;
    set<LLU> s;
    s.insert(1);
    for(i = 2; i <= 65536; i++) {
        for(j = 2; j < 100; j++) {
            if(mark[j] == 1) {
                if(j*log2(i) < 64)
                    s.insert(mpow(i, j));
                else    break;
            }
        }
    }
    set<LLU>::iterator it;
    for(it = s.begin(); it != s.end(); it++)
        printf("%llu\n", *it);
    return 0;
}
