#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[1000],n,h,i=1,count,sum1,sum2;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        sum1=0;
        for(h=0;h<n;h++)
        {
            cin>>a[h];
            sum1=sum1+a[h];
        }
        count=(sum1/n);
        sum2=0;
        for(h=0;h<n;h++)
        {
            if(a[h]>count){
                sum2=sum2+(a[h]-count);
            }
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",i,sum2);
        i++;
    }
    return 0;
}
