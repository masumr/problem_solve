#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    long long sum,k;
    while(cin>>a)
    {
        if(a[0]=='0')
            break;
        sum=0;
        k=1;
        int x=strlen(a);
        for(int i=x-1;i>=0;i--)
        {
            sum+=((int)a[i]-48)*(pow(2,(k++))-1);
        }
        cout<<sum<<endl;
    }
}
