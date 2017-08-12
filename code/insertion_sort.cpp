#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[6]={5,2,4,6,1,3};
    int j,i,key;
    for(j=0;j<6;j++)
    {
        key=a[j];
        i=j-1;
        while(i>=0 && a[i]>key)
        {
            a[i+1]=a[i];
            i--;
        }
        a[i+1]=key;
    }
    for(j=0;j<6;j++)
        cout<<a[j]<<endl;
}
