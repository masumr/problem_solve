#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    int m=55;
    int a,b;
    while(cin>>t)
    {
        int arr[1000],k=0;
        for(i=1;i<=t;i++)
        {
            cin>>a>>b;
            if(a<=m)
            {
                arr[k++]=b;
            }
        }
        if(k==0)
            cout<<"“Bad luck"<<endl;
        else{
            sort(arr,arr+k);
            cout<<arr[0]<<endl;
        }
    }
}
