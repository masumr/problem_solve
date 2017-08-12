#include <cstdio>
#include <algorithm>
using namespace std;

long long last[700000] = {0, 1, 3};
int N;

int main() {
  for (N = 3; last[N - 1] <= 2e9; N++) {
    last[N] = last[N - 1] + (lower_bound(last, last + N, N) - last);
  }
  int n;
  while (scanf("%d", &n) && n) {
    printf("%d\n", lower_bound(last, last + N, n) - last);
  }
  return 0;
}
