#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,b,c;
    char a[20];
    while(cin>>i)
    {
        int sum=0,count=0;
        for(j=0;j<i;j++)
        {
            cin>>a>>b>>c;
            if(c>=2200)
                sum++;
            if(b<c)
                count++;
        }
        if(sum==i && count>i/2)
            printf("YES\n");
        else
            printf("NO\n");
    }
}
