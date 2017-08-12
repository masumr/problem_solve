#include<bits/stdc++.h>
using namespace std;
const int n=1000000;
double ans[n];
int main()
{
    memset(ans,0.0,sizeof(ans));
    int a,b;
    int t,c=0;
    double sum=0;
    for(int i=1;i<=n;i++)
    {
       double x=log10(i);
       sum+=x;
       ans[i]=sum;
    }
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&a,&b);
        printf("Case %d: ",++c);
        double x=(ans[a]/log10(b));
        cout<<(int)(x)+1<<endl;
    }
}
