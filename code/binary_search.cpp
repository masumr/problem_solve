#include<bits/stdc++.h>
using namespace std;
const int size=10;
int array[size]={11,22,33,44,55,66,77,88,99,110};
int count=0;
int binary_search(int lo,int hi,int value)
{
    int mid=(lo+hi)/2;
    cout<<"midindex value: "<<array[mid]<<endl;
    if(array[mid]==value)
        return mid;
    else{
        if(lo>=hi)
            return -1;
        else
        {
            if(array[mid]>value){
                binary_search(lo,mid-1,value);
            }
            else
                binary_search(mid+1,hi,value);
        }
    }
}
int main()
{
    int result=binary_search(0,size-1,77);
    if(result<0)
        printf("search by  and this value not found\n");
    else
        printf("search by  and this value found\n");
}
