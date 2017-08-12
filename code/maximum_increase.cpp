#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n;
    cin>>n;
    ll a[n+5];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int count1=1;
    int max1=0;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]<a[i]){
            count1++;
        }
        else{
            if(max1<count1){
                max1=count1;
            }
            count1=1;
        }
    }
    if(max1<count1)
        max1=count1;
    cout<<max1<<endl;
}
