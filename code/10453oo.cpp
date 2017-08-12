#include<iostream>
#include<cstdio>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
#include<cstring>
using namespace std;

typedef long long int64;
const int INF = 0x3f3f3f3f;
const int MAXN = 1010;
char str[MAXN];
int len;
int f[MAXN][MAXN];
void dp() {
    memset(f, 0, sizeof(f));
    for (int d = 2; d <= len; ++d)
        for (int l = 0; l+d-1 <= len; ++l) {
            int r = l + d - 1;
            int& ans = f[l][r] = INF;
            if(str[l] == str[r])
                ans = f[l+1][r-1];
            ans = min(ans, min(f[l+1][r], f[l][r-1])+1);
        }
}

void output(int i, int j) {
    if (i > j) return;
    if (i==j) { printf("%c", str[i]); return; }
    if (str[i] == str[j]) {
        printf("%c", str[i]);
        output(i+1, j-1);
        printf("%c", str[i]);
    } else if (f[i][j] == f[i+1][j] + 1) {
        printf("%c", str[i]);
        output(i+1, j);
        printf("%c", str[i]);
    } else {
        printf("%c", str[j]);
        output(i, j-1);
        printf("%c", str[j]);
    }
}
int main(){
    while (gets(str)) {
        len = strlen(str);
        dp();
        printf("%d ", f[0][len-1]);
        output(0, len-1);
        putchar('\n');
    }
    return 0;
}
