#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
  while (scanf("%d%d", &n, &m) == 2) {
    printf("%d/%d = %d.", n, m, n / m);
    int len, ans[3333] ={},rec[3333] ={};
    for (len = 1; ; len++) {
      ans[len - 1] = n / m;
      n = n % m;
      if (rec[n]) {
        int i;
        for (i = 1; i < rec[n]; i++) {
          printf("%d", ans[i]);
        }
        printf("(");
        int cycle = len - rec[n];
        for (i = 0; i < (cycle <= 50 ? cycle : 50); i++) {
          printf("%d", ans[rec[n] + i]);
        }
        printf("%s)\n", cycle <= 50 ? "" : "...");
        printf("   %d = number of digits in repeating cycle\n\n", cycle);
        break;
      }
      rec[n] = len;
      n = n * 10;
    }
  }
}
