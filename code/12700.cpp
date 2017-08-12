#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0,i=1;
    cin>>t;
    while(t--)
    {
        int matches=0,j=0;
        cin>>matches;
        char a[11];
        scanf("%s",a);
        int A=0,B=0,W=0,T=0;
        for(j=0;j<matches;j++)
        {
            if(a[j]=='B')
                B++;
            else if(a[j]=='W')
                W++;
            else if(a[j]=='A')
                A++;
            else if(a[j]=='T')
                T++;
        }
        if((B+A==matches)&& B!=0)
                printf("Case %d: BANGLAWASH\n",i);
        else if((W+A==matches) && W!=0)
            printf("Case %d: WHITEWASH\n",i);
        else if(A==matches)
            printf("Case %d: ABANDONED\n",i);
        else if(B>W)
            printf("Case %d: BANGLADESH %d - %d\n",i,B,W);
        else if(B<W)
                printf("Case %d: WWW %d - %d\n",i,W,B);
        else if(B==W)
            printf("Case %d: DRAW %d %d\n",i,B,T);
        i++;

    }
    return 0;
}
