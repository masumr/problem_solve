#include<bits/stdc++.h>
using namespace std;
void quick(int a[],int lo,int hi)
{
    int i=lo,j=hi;
    int pivot=a[(lo+hi)/2];
    while(i<=hi && j>=lo){
        while(a[i]<pivot)
            i++;
        while(a[j]>pivot)
            j++;
        if(i<=j){
            swap(a[i],a[j]);
            i++;
            j--;
        }
        else{
            if(lo<j)
                quick(a,lo,j);
            if(i<hi)
                quick(a,i,hi);
            return;
        }
    }
}
int main()
{
    int b[10];
    for(int j=0;j<3;j++)
        cin>>b[j];
    quick(b,0,2);
    for(int j=0;j<3;j++)
        cout<<b[j]<<"\t";
}
