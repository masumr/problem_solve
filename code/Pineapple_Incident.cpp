#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t,s,x;
    cin>>t>>s>>x;
    ll sum=t;
    ll count=0;
    if(sum==x)
    {
        count++;
    }
    else{
        while(sum<=x)
        {
            sum+=s;
            if(sum==x){
                count++;
                break;
            }
            if((sum+1)==x)
            {
                count++;
                break;
            }
        }
    }
    if(count!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
