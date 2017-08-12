#include<bits/stdc++.h>
using namespace std;
int main()
{
    int name[100000];
    long long n,sum,count,a,j,k,i;
    while(cin>>n){
        if(n==0)
            break;
        sum=0;
        a=n;
        count=0;
        i=0;
        while(a>0)
        {
            sum=a%2;
            if(a%2==1)
                count++;
            name[i]=sum;
            a=a/2;
            i++;
        }
        printf("The parity of ");
        for(k=i-1;k>=0;k--)
            printf("%d",name[k]);
        printf(" is %d (mod 2).\n",count);
    }
    return 0;

}
