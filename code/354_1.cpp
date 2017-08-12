#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[110];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int max1=a[0];
    int min1=a[0];
    int x=0,y=0,value,value1;
    for(int i=1;i<n;i++)
    {
        if(min1>a[i]){
            min1=a[i];
            x=i;
        }
        if(max1<a[i]){
            max1=a[i];
            y=i;
        }
    }
    value=n-min(x,y)-1;
    value1=max(x,y);
    cout<<max(value,value1)<<endl;

}
