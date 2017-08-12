#include<bits/stdc++.h>
using namespace std;
void quick_sort(int a[],int lo,int hi)
{
    int i=lo,j=hi;
    int pivot=(a[(lo+hi)/2]);
    while(lo!=hi)
    {
        while(a[i]<pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else
        {
            if(i<hi)
                quick_sort(a,i,hi);
            if(j>lo)
                quick_sort(a,lo,j);
            return;
        }
    }
}
int main()
{
    int a[10];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++)
        cout<<a[i]<<' ';
}
