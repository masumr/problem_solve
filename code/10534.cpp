#include<bits/stdc++.h>
using namespace std;
const int size=10007;
const int inf = 2000000000;
int a[size],b[size],I[size],i1[size],l[size],s1[size],s2[size];
int main()
{
    int n;
    int lo,mid,hi;
    while(scanf("%d",&n)==1)
    {
        for(int i=0; i<n; i++)
        {
            scanf("%d",&a[i]);
        }
        int k=0;
        for(int i=n-1; i>=0; i--)b[k++]=a[i];
        I[0] = -inf;
        i1[0]=-inf;
        for( int i = 1; i <= n; i++ )
        {
            I[i] = inf;
            i1[i]=inf;
        }
        int lislength=0;
        for(int i=0; i<n; i++)
        {
            lo=0,hi=lislength;
            while(lo<=hi)
            {
                mid=(lo+hi)/2;
                if(I[mid]<a[i])lo=mid+1;
                else hi=mid-1;
            }
            I[lo]=a[i];
            s1[i]=lo;
            if(lislength<lo)lislength=lo;
        }
        lislength=0;
        for(int i=0; i<n; i++)
        {
            lo=0,hi=lislength;
            while(lo<=hi)
            {
                mid=(lo+hi)/2;
                if(I[mid]<b[i])lo=mid+1;
                else hi=mid-1;
            }
            I[lo]=b[i];
            s2[i]=lo;
            if(lislength<lo)lislength=lo;
        }
        int mx=0;
        for(int i=0;i<n;i++){
            if(s1[i]==s2[i]){
                mx=max(mx,s1[i]);
            }
        }
        printf("%d\n",mx*2+1);
    }
}
