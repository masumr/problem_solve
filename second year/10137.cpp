#include<bits/stdc++.h>
using namespace std;
typedef double dd;
int main(){
  int n;
  while(cin>>n){
    if(n==0) break;
    vector<dd> m;
    dd a,t=0,rp=0,rn=0;
    for (int i = 0; i < n; ++i)
    {
      cin>>a;
      t+= a;
      m.push_back(a);
    }
    t/= n;
    for (int i = 0; i < n; ++i)
    {
      dd dif =(dd)(long)((m[i]-t) * 100.0) / 100.0;
      if(dif>0)
        rp+=dif;
      else
        rn+=dif;
    }
    double r = (-rn > rp) ? -rn: rp;
    r = (r<0)?-r:r;
    printf("$%.2lf\n",r);
    m.clear();
  }

 return 0;
}
