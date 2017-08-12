#include<bits/stdc++.h>
using namespace std;
int largest(const int a[],int lowerindex,int higherindex)
{
    if(lowerindex==higherindex)
        return a[lowerindex];
    else
    {
        int max=largest(a,lowerindex+1,higherindex);
        if(a[lowerindex]>=max)
            return a[lowerindex];
        else
            return max;
    }
}
int main()
{
    int a[]={8,3,4,5,1,2,12,23,13,17};
    int n=sizeof(a)/sizeof(a[0]);
    int maximum=largest(a,0,n);
    cout<<maximum<<endl;
}
