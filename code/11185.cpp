#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,sum,i=0,k;
    int a[10000];
    while(cin>>n)
    {
        if(n<0)
            break;
        if(n==0)
            printf("0\n");
        else{
            sum=0;
            i=0;
            while(n!=0)
            {
                sum=(n%3);
                a[i]=sum;
                n=n/3;
                i++;
            }

            for(k=i-1;k>=0;k--)
                printf("%d",a[k]);
            printf("\n");
        }
    }
    return 0;
}
