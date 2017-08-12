#include<bits/stdc++.h>
using namespace std;
typedef long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll a;
        cin>>a;
        int sum=((sqrt(1+8*a))-1)/2;
        cout<<sum<<endl;
        cout<<a-((sum*(sum+1))/2)<<endl;
    }
}
