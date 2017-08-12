#include<bits/stdc++.h>
using namespace std;
int dp[100],dir[100];
int value[]={-1000,5,0,9,2,7,3,4};
int n=7;
int lis(int u)
{
    if(dp[u]!=-1) return dp[u];
    int mix=0;
    for(int i=u+1;i<=n;i++)
    {
        if(value[i]>value[u]){
            if(lis(i)>mix)
            {
                mix=lis(i);
                dir[u]=i;
            }
        }
    }
    dp[u]=1+mix;
    return dp[u];
}
void soluation(int start)
{
    while(dir[start]!=-1)
    {
        printf("index %d & value %d\n",start,value[start]);
        start=dir[start];
    }
}
int main()
{
    memset(dp,-1,sizeof(dp));
    memset(dir,-1,sizeof(dir));
    int l=0,start;
    for(int i=1;i<=n;i++)
    {
        int n=lis(i);
        cout<<"longest increase path "<<n<<endl;
        if(n>l)
        {
            l=n;
            start=i;
        }
    }
    printf("Lis=%d start point=%d\n",l,start);
    soluation(start);
}
