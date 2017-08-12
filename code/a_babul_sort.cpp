#include<bits/stdc++.h>
using namespace std;
int a[10];
int temp[10];
void mergesort(int lo,int hi)
{
    if(lo==hi)
        return;
    else
    {
        int mid=(lo+hi)/2;
        mergesort(lo,mid);
        mergesort(mid+1,hi);
        int i,j,k;
        for(i=lo,j=mid+1,k=lo;k<=hi;k++)
        {
            if(i==mid+1)
                temp[k]=a[j++];
            else if(j==hi+1)
                temp[k]=a[i++];
            else if(a[i]>a[j])
                temp[k]=a[j++];
            else
                temp[k]=a[i++];
        }
        for(k=lo;k<=hi;k++)
            a[k]=temp[k];
    }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    a[0]=x+y*z;
    a[1]=x*(y+z);
    a[2]=x*y*z;
    a[3]=(x+y)*z;
    a[4]=x+y+z;
    mergesort(0,4);
    cout<<a[4]<<endl;
}
