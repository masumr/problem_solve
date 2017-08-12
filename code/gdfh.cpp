#include<bits/stdc++.h>
using namespace std;
int array[10000];
int binary_search(int lo,int hi,int value)
{
    int mid=(lo+hi)/2;
    if(array[mid]==value)
        return mid;
    else
    {
        if(lo>=hi)
            return -1;
        else
        {
            if(array[mid]>value)
                return binary_search(lo,mid-1,value);
            else
                return binary_search(mid+1,hi,value);
        }
    }
}
int main()
{
    int low=0,high,number,t;
    cin>>high>>t;
    for(int i=low;i<high;i++)
        cin>>array[i];
    for(int j=1;j<=t;j++){
        cin>>number;
        int result=binary_search(low,high-1,number);
        if(result<0)
            cout<<-1<<endl;
        else
            cout<<result<<endl;
    }
    return 0;
}
