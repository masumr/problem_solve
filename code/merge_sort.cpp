#include<bits/stdc++.h>
using namespace std;
int temp[100],num[100];
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
            temp[k]=num[j++];
        else if(j==hi+1)
            temp[k]=num[i++];
        else if(num[i]>num[j])
            temp[k]=num[j++];
        else
            temp[k]=num[i++];
    }
    for(k=lo;k<=hi;k++)
        num[k]=temp[k];
}
int main()
{
    int l=0,h=9,ii;
    for(ii=l;ii<=h;ii++){
        cin>>num[ii];
    }
    merge_sort(l,h);
    for(ii=l;ii<=h;ii++){
        cout<<num[ii]<<" ";
    }
}
