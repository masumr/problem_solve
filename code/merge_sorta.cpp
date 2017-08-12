#include<bits/stdc++.h>
using namespace std;
int a[10000];
int temp[1000];
void merge_sort(int lo,int hi)
{
    if(lo==hi)
        return;
    int mid=(lo+hi)/2;
    merge_sort(lo,mid);
    merge_sort(mid+1,hi);
    int i,j,k;
    for(i=lo,j=mid+1,k=lo;k<=hi;k++)
    {
        if(i==mid+1)
            temp[k]=a[j++];
        else if(j==hi+1)
            temp[k]=a[i++];
        else if(a[i]<a[j])
            temp[k]=a[i++];
        else
            temp[k]=a[j++];
    }
    for(k=lo;k<=hi;k++)
    {
        a[k]=temp[k];
    }
}
int main()
{
    int i,t;
    cin>>t;
    for(int f=0;f<t;f++)
        cin>>a[f];
    merge_sort(0,t-1);
    for(int f=0;f<t;f++)
        cout<<a[f]<<"\t";
}
