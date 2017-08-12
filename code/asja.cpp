#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    int t;
    scanf("%d",&t);
    int c=0;
    while(t--)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: %d\n",++c,a+b);
    }
}
