#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y,v,n,count,a;
    while(cin>>x>>y){
        if(x==0 && y==0)
            break;
        count=0,a=0;
        if(x<y)
            swap(x,y);
        while(x!=0)
        {
            n=(x%10+y%10+a)/10;
            if(n==1)
                count++;
            x=x/10;
            y=y/10;
            a=n;
        }
        if(count==0)
            printf("No carry operation.\n");
        else if(count==1)
            printf("1 carry operation.\n");
        else
            printf("%ld carry operations.\n",count);

    }
    return 0;
}
