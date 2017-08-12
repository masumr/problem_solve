#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c,d;
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        scanf("%s",a);
        int x=a.size();
        printf("Case %d: ",i);
        if(x==1)
            printf("Yes\n");
        else
        {
                d=a;
                int y=x/2;
                if(x%2==0)
                    b=a.erase(0,y);
                else
                    b=a.erase(0,y+1);
                reverse(b.begin(),b.end());
                c=d.erase(y,x-1);
                if(b==c)
                    printf("Yes\n");
                else
                    printf("No\n");
        }
    }
}
