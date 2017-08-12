#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+5];
    int ans=0;
    int count=0;
    for(int i=0;i<n;i++)
        cin>>a[i];
    if(a[0]<=15){
        for(int i=1;i<n;i++)
        {
            int sum=a[i]-a[i-1];
            if(sum<=15){
                count++;
            }
            else
            {
                break;
            }
        }
        ans=a[count]+15;
        if(ans>90)
            ans=90;
    }
    else
        ans=15;
    cout<<ans<<endl;
}
