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
        I[0] = -inf;
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
        int m3=100000,m4=0;
         for(int i=0;i<n;i++){
            I[s1[i]]=i;
            cout<<s1[i]<<' ';
        }
       // m3--;
        //cout<<m3<<endl;
        //cout<<endl;
        for(int i=n-1;i>=0;i--){
            i1[s1[i]]=i;
        }
        int sum=1;
        for(int i=lislength;i>0;i--){
            if(i1[i]<I[i-1])
            {
                //cout<<i1[i]<<' '<<I[i-1]<<endl;
                sum=(i*2)-1;
                for(int j=i-2;j>0;j--){
                    if(i1[i]<I[j]){
                        m3=min(m3,j);
                    }
                }
                cout<<m3<<endl;
                m3--;
                sum-=(m3*2);
                break;
            }
        }
        cout<<sum<<endl;
        //cout<<lislength<<endl;
    }
}
