#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,x,b,c,d,m,gcd,lcm,j,e;
    int a[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i = 0; i < n; ++i)
    {
        for (j = i + 1; j < n; ++j)
    {
            if (a[i]<a[j])
                swap(a[i],a[j]);
    }
    }
    b=a[0];
    for(m=1;m<n;m++){
        c=a[m];
        if(b>c)
            x=c;
        else
            x=b;
    for(;x>=1;x--){
        if(b%x==0&&c%x==0){
            gcd=x;
            if(m==1)
                d=b;
            else
                d=lcm;

            break;
        }
    }
        lcm=d*c/gcd;
        b=gcd;
    }
    printf("GCD: %d\n",gcd);
    printf("LCM: %d\n",lcm);
}
