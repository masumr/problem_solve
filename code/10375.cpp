#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll p,q,r,s,i;
    while(scanf("%lld%lld%lld%lld",&p,&q,&r,&s)==4)
    {
        ll m1=(q<p-q)?p:p-q;
        ll m2=(r<r-s)?r:r-s;
        q = min(q,p-q);
        s = min(s,r-s);
        p = p - q + 1;
        r = r - s + 1;
        double ret = 1.00 ;
        int i = 1, j = 1 ;
        while(i <= q || j <= s)
        {
            if(i <= q )
            {
                ret *= double(p);
                ret /= double(i);
                p++,i++;
            }
            if(j <= s)
            {
                ret *=  double(j);
                ret /= double(r);
                j++,r++;
            }
        }
        printf("%.5lf\n",ret);
    }
}
