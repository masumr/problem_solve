#include<bits/stdc++.h>
using namespace std;
const int maxN=1001;
typedef long long int int64;

int n, c[maxN];
void solve(int x) {
    int64 res = 0, xx = 1;
    for (int i = n - 1; i >= 0; i--) {
        res += c[i] * xx;
        xx *= x;
    }
    printf("%lld", res);
}
int main() {
    int len, k, x;
    char s[maxN];
    while (gets(s)) {
        len = strlen(s), k = 0;
        n = 0;
        while (k < len) {
            while (k < len && s[k] == ' ') k++;
            if (k < len) {
                sscanf(s + k, "%d", &c[n++]);
                while (k < len && s[k] != ' ') k++;
            }
        }

        gets(s);
        len = strlen(s), k = 0;
        bool space = false;
        while (k < len) {
            while (k < len && s[k] == ' ') k++;
            if (k < len) {
                sscanf(s + k, "%d", &x);
                if (space) printf(" "); space = true;
                solve(x);
                while (k < len && s[k] != ' ') k++;
            }
        }
        printf("\n");
    }
}

