#include<bits/stdc++.h>
using namespace std;

void quick_sort(int a[],int left,int right)
{
    int i=left,j=right;
    int pivot=a[(left+right)/2];
    while(i<=right && j>=left)
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
        else{
            if(left<j)
                quick_sort(a,left,j);
            if(i<right)
                quick_sort(a,i,right);
            return;
        }
    }
}
int main()
{
    int a[10];
    for(int i=0;i<9;i++)
        cin>>a[i];
    quick_sort(a,0,8);
    for(int i=0;i<9;i++)
        cout<<a[i]<<"\t";
}
