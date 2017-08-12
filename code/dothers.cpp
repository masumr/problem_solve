#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll a,b,count=0,count1=0;
    cin>>a;
    while(a>0)
    {
        if((a%10)==4){
            count++;
        }
        if((a%10)==7)
            count++;
        a=a/10;
    }
    if(count==4 || count==7)
        cout<<"YES"<<endl;
    else
         cout<<"NO"<<endl;
    return 0;
}
