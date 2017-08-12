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
        string a;
        int x;
        int sum=0;
        printf("Case %d:\n",++c);
        while(n--)
        {
            cin>>a;
            if(a=="donate")
            {
                cin>>x;
                sum+=x;
            }
            else cout<<sum<<endl;
        }
    }
}
