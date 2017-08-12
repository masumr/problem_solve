#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,n,i,count1,m,max,i1,i2;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        i1=a;
        i2=b;
        if(a>b)
            swap(a,b);
            max=0;
        for(i=a;i<=b;i++)
        {
            count1=1;
            n=i;
            if(n%2==1)
                n=3*n+1;
            else
                n=n/2;
            while(n!=1)
            {
                if(n%2==1){
                    n=3*n+1;
                }
                else{
                    n=n/2;
                }
                count1++;
            }
            if(max<count1)
            {
                max=count1;
                m=i;
            }
        }
        printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",a,b,m,max);
    }
    return 0;
}
