#include<bits/stdc++.h>
using namespace std;
int main()
{
    long double n,m;
    while(cin>>n)
    {
        m=((n*n*(n+1)*(n+1))/4);
        printf("%.0Lf\n",m);
    }
    return 0;
}
