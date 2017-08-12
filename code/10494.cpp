#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i, b,sum,sum1;
    char x,a[10000],s[10000];
    while(cin>>a>>x>>b)
    {
        int n=strlen(a);
        sum=0;
        if(x=='%')
        {
            for(i=0;i<n;i++)
                sum=((sum*10)+((int)a[i]-48))%b;
            s=sum+48;
        }
        cout<<s;
        sum1=0;
        if(x=='/')
        {
            for(i=0;i<n;i++)
            {
                sum=(sum*10)+(((sum1*10)+((int)a[i]-48))/b);
                sum1=((sum1*10)+((int)a[i]-48))%b;
            }
        }
        //cout<<sum<<endl;
    }
    return 0;
}
