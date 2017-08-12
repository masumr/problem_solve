#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[15]={561, 1105, 1729, 2465, 2821, 6601, 8911, 10585, 15841, 29341, 41041, 46657, 52633, 62745, 63973};
    int b,count=0,i;
    while(cin>>b)
    {
        if(b==0)
            break;
        count=0;
        for(i=0;i<15;i++)
        {
            if(a[i]==b){
                printf("The number %d is a Carmichael number.\n",b);
                ++count;
                break;
            }
        }
        if(count==0)
            printf("%d is normal.\n",b);
    }
    return 0;
}
