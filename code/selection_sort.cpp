#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5];
    int t,count=0;
    cin>>t;
    for(int k=0;k<t;k++)
        cin>>a[k];
    for(int i=0;i<t-1;i++)
    {
        int min=i;
        for(int j=i+1;j<t;j++)
        {
            if(a[min]>a[j])
                min=j;
        }
        if(min!=i){
            swap(a[min],a[i]);
            count++;
        }
    }
    cout<<count<<endl;
}
