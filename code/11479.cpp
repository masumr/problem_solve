#include<bits/stdc++.h>
using namespace std;
int main()
{
    double a[3];
    long long i,j,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        for(j=0;j<3;j++)
            cin>>a[j];
        sort(a,a+3);
        if((a[0]+a[1])>a[2]){
            if(a[0]==a[1] && a[0]!=a[2])
                printf("Case %ld: Isosceles\n",i);
            else if(a[2]==a[1] && a[0]!=a[1])
                printf("Case %ld: Isosceles\n",i);
            else if(a[0]==a[1] && a[1]==a[2])
                printf("Case %ld: Equilateral\n",i);
            else
               printf("Case %ld: Scalene\n",i);
        }
        else
            printf("Case %ld: Invalid\n",i);
    }
    return 0;
}
