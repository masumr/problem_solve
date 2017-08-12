#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int c=0;
    while(t--)
    {
        int n;
        cin>>n;
        int sum=0;
        while(n!=0)
        {
            sum+=n%2;
            n/=2;
        }
        printf("Case %d: ",++c);
        if(sum%2) cout<<"odd"<<endl;
        else cout<<"even"<<endl;
    }

}
