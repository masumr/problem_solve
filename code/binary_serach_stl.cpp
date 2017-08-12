#include<bits/stdc++.h>
using namespace std;
int a[10];
int binaryserach(int a[],int lo,int hi,int value)
{
    int mid=(lo+hi)/2;
    if(a[mid]==value)
        return mid;
    else
    {
        if(lo>hi)
            return -1;
        else
        {
            if(a[mid]>value)
               return binaryserach(a,lo,mid-1,value);
            else
                return binaryserach(a,mid+1,hi,value);
        }
    }
}

int main()
{
    int a[]={10,20,30,40,50,60,70,80,90};
    int l=0;
    int n=sizeof(a)/sizeof(a[0]);
    int x=30;
    int result=binaryserach(a,l,n,x);
    (result==-1)?cout<<"Not found the result"<<endl
                :cout<<"found the value"<<endl;
}
