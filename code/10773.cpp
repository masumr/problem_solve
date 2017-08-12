#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
       double d,v,u,t1,t2,p,w;
       cin>>d>>v>>u;
       w=((u*u)-(v*v));
       if(w<=0)
            printf("Case %d: can't determine\n",i);
        else{
           t1=(d/sqrt(w));
           t2=(d/u);
           p=t1-t2;
           if(p<=0){
                 printf("Case %d: can't determine\n",i);
           }
           else
                printf("Case %d: %.3lf\n",i,p);
        }
    }
    return 0;
}
