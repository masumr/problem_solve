#include <cstdio>
#include <algorithm>
#include <cmath>
#include<iostream>
using namespace std;
typedef unsigned long long int ll;
int main() {
  int t;
  int p,count;
  int l[50];
  scanf("%d",&t);
  while (t--) {
    count = 0;
    ll result = 0;
    while (scanf("%d",&p) && p!=0) l[count++] = p;
    sort(l, l+count,greater<int>());
    for (int i = 0; i < count; i++) {
      result += 2 * pow(l[i], i+1);
      if (result > 5000000)
        break;
    }

    if (result > 5000000)
      printf("Too expensive\n");
    else
      printf("%lld\n",result);
  }
}
