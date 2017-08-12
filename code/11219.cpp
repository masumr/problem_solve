#include<bits/stdc++.h>
using namespace std;
int main()
{
    int y1,m1,d1,y2,m2,d2,total;
    int i,t;
    while(cin>>t){
        for(i=1;i<=t;i++)
        {
            scanf("%d/%d/%d",&d1,&m1,&y1);
            scanf("%d/%d/%d",&d2,&m2,&y2);
            if(d2>d1)
            {
                d1=d1+30;
                m2=m2+1;
            }
            if(m2>m1)
            {
                m1=m1+12;
                y2=y2+1;
            }
            total=y1-y2;
            if(total<0)
                printf("Case #%d: Invalid birth date\n",i);
            else if(total>130)
                 printf("Case #%d: Check birth date\n",i);
            else
                printf("Case #%d: %ld\n",i,total);
        }
    }
    return 0;
}
