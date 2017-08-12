#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int h,m,s,c;
    string a;
    while(cin>>a)
    {
        int x=a.size();
        ll sum=(((a[0]-48)*10)+(a[1]-48))*60+(a[2]-48)+(a[3]-48);
        sum=(sum*60)+(a[4]-48)+(a[5]-48);
        sum=(sum*100)+(a[6]-48)+(a[7]-48);
        c=sum%100;
        sum/=100;
        s=sum%100;
        sum/=100;
        m=sum%100;
        sum/=100;
        cout<<sum<<m<<s<<c<<endl;
    }
}
