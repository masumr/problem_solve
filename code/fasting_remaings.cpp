#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,h1,m1,h2,m2,t1,t2,t;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cin>>h1;
        getchar();
        cin>>m1;
        cin>>h2;
        getchar();
        cin>>m2;
        if(m2<m1)
        {
            t1=(m2+60)-m1;
            t2=(h2-1)-h1;
        }
        else
        {
            t1=m2-m1;
            t2=h2-h1;
        }
        if(t2<0)
            t2+=24;
        printf("Case %d: %d hours %d minutes \n",i,t2,t1);
    }
}
