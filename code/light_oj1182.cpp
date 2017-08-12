#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int x;
        cin>>x;
        int sum=0;
        while(x!=0)
        {
            sum+=(x%2);
            x/=2;
        }
        if(sum%2==0)
            printf("Case %d: even\n",i);
        else
            printf("Case %d: odd\n",i);
    }
}
