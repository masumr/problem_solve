#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    while(scanf("%d",&n)==1){
        int a[n+5];
        for(int i=0;i<n;i++)scanf("%d",&a[i]);
        int x=0,y=0;
        sort(a,a+n);
        int mn;
        scanf("%d",&mn);
         int i = 0, j = n - 1;
        int bI, bJ;
        while (i < j)
        {
            if (a[i] + a[j] <mn)
                ++i;
            else if (a[i] +a[j] ==mn)
            {
                x= a[i];
                y= a[j];
                ++i; --j;
            }
            else
                --j;
        }
        printf("Peter should buy books whose prices are %d and %d.\n\n",x,y);
    }
}
