#include<bits/stdc++.h>

using namespace std;
bool a[100010044];
#define ll long long int
void sieve()
{
    for(ll f1=3;f1<=10001;f1+=2)
    {
        if(a[f1]==false){
            for(ll f2=(f1*f1);f2<=100010042;f2+=f1)
            {
                a[f2]=true;
            }
        }
    }
}
int main()
{
    int a1,b,count,j;
    sieve();
    while(scanf("%d%d",&a,&b)==2)
    {
        int count=0,k=0;
        for(j=a1;j<=b;j++)
        {
            if((a[j*j+j+41])==false && (j*j+j+41)%2!=0){
                ++count;
            }
            ++k;
        }
        printf("%.2lf\n",(count/(k*1.00)*100+1e-9));
   }
    return 0;
}
