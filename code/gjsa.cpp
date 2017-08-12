#include<bits/stdc++.h>
using namespace std;
set<int>a;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        printf("Case %d:\n",i);
        int n;
        scanf("%d",&n);
        for(int j=1;j<=n;j++)
        {
            int x,y;
            scanf("%d%d",&x,&y);
            if(x==1)
            {
                a.insert(y);
            }
            set<int>::iterator it;
            if(x==2)
            {
                if(!a.empty()){

                    it=a.find(y);
                    a.erase(it);
                }
            }
            printf("%d\n",a.size());
        }
        a.clear();
    }
}
