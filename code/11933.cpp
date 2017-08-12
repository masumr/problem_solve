#include <stdio.h>
int a, b, len,two[32] = {1};
void bin(int n, int now){
    if (!n){
        return;
    }
    if (n & 1){
        len++;
        a += two[now] * (len & 1);
        b += two[now] * !(len & 1);
    }
    bin(n >> 1, now + 1);
}
int main(){
    int n;
    for (n = 1; n < 32; n++)
        two[n] = two[n - 1] << 1;
    while (scanf("%d", &n) && n){
        a = b = len = 0;
        bin(n, 0);
        printf("%d %d\n", a, b);
    }
}
