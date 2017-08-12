#include <iostream>
#include <stdio.h>
using namespace std;
typedef long long int ll;
template<typename T>
T count(T x, T d) {
    //cout<<x<<' '<<d<<endl;
   T cnt = 0;
   while(x > 0){
      if(x % d == 0)cnt++;
      else break;
      x /= d;
   }
   return cnt;
}
int main(){
   ll x;
   while(scanf("%lld", &x) && x!=0){
      ll cnt = 0;
      for(ll d = 1; d * d <= x; d++)if(x % d == 0){
         if(d != 1) cnt += count(x, d);
         if(d * d != x) cnt += count(x, x / d);
      }
      printf("%lld\n", cnt);
   }
}
