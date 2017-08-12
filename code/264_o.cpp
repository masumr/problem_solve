#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll tc,n,i;
main()
{
    while(cin>>n)
    {
    i=1;
    ll s=0;
        while(n>s){
        s+=i;
        i++;

        }
        i--;
        int ans=s-n;
        if(i%2==0)
        cout<<"TERM "<<n<< " IS "<<abs(i-ans)<<"/"<<1+ans<<endl;
        else
        cout<<"TERM "<<n<< " IS "<<1+ans<<"/"<<abs(i-ans)<<endl;
    }

}
