#include<bits/stdc++.h>
using namespace std;
int main()
{
    double n,u,v,s,a,t;
    int i=1;
    while(cin>>n)
    {
        if(n==0)
            break;
        if(n==1)
        {
            cin>>u>>v>>t;
            a=(v-u)/t;
            s=(v*v-u*u)/(2*a);
            printf("Case %d: %.3lf %.3lf\n",i,s,a);
        }
        if(n==2)
        {
            cin>>u>>v>>a;
            t=(v-u)/a;
            s=(v*v-u*u)/(2*a);
             printf("Case %d: %.3lf %.3lf\n",i,s,t);
        }
        if(n==3)
        {
            cin>>u>>a>>s;
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
             printf("Case %d: %.3lf %.3lf\n",i,v,t);
        }
        if(n==4)
        {
            cin>>v>>a>>s;
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",i,u,t);
        }
        i++;
    }
    return 0;
}
