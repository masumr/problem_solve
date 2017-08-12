#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<vector<int> >a;
int num=1000003;
void c()
{
    a[0][0]=1;
    for(int i=1;i<=100;i++)
    {
        a[i][0]=1;
        for(int j=1;j<=i;j++)
        {
            a[i][j]=(a[i-1][j-1]+a[i-1][j])%num;
        }
    }
}
int main()
{
    int t,d=0;
    c();
    scanf("%d",&t);
    while(t--)
    {
        int x,y;
        scanf("%d%d",&x,&y);
        printf("Case %d: %d\n",++d,a[x][y]);
    }
}
