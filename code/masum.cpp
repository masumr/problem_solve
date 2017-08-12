#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    int t;
    cin>>t;
    int i;
    for(i=0;i<t;i++)
        cin>>a[i];
    for(i=1;i<t;i++)
    {
        int key=a[i];
        int j=i-1;
        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
    for(i=0;i<t;i++)
        cout<<a[i]<<"\t";

}
