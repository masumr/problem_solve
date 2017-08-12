#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll array[10]={0};
    ll value=10,f1,f2;
    for(f1=2;f1<=sqrt(value);f1++)
        {
            for(f2=(f1*f1);f2<=value;f2=f2+f1)
            {
                array[f2]=1;
            }
        }
        int n;
        cin>>n;
    if(array[n-1]==0)
    {
        cout<<n<<endl;
    }
}
