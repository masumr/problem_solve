#include<bits/stdc++.h>
using namespace std;
int a[100];
int mid;
int binary_search(int lo,int hi,int value)
{
    mid=(lo+hi)/2;
    if(a[mid]==value)
        return mid;
    else{
        if(lo>hi)
            return -1;
        else
        {
            if(a[mid]>value)
                return binary_search(lo,mid-1,value);
            else
                return binary_search(mid+1,hi,value);
        }

    }
}
int main()
{
     for(int i=0;i<10;i++)
        cin>>a[i];
     if(binary_search(0,9,5)>=0)
        cout<<mid<<endl;

}
