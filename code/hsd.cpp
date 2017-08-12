#include<bits/stdc++.h>
using namespace std;
void quick(int a[],int lo,int hi)
{
    int i=lo,j=hi;
    int pivot=a[(lo+hi)/2];
    while(i<j){
        while(a[i]<pivot)
            i++;
        while(a[j]>pivot)
            j--;
        if(i<j)
            swap(a[i],a[j]);
        else
        {
            if(i<hi)
                quick(a,i,hi);
            if(j>lo)
                quick(a,lo,j);
            return;
        }
    }
}
int main()
{
    int b[10];
    int i,t;
    cin>>t;
    for(i=0;i<t;i++)
        cin>>b[i];
    quick(b,0,t);
    for(i=0;i<t;i++)
        cout<<b[i]<<"\t";
}
