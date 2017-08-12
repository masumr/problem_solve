#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[200];
    double y,n;
    while(cin>>n>>a)
    {
        long long x=strlen(a);
        y=0;
        long long k=x-1;
        for(int i=0;i<x;i++)
        {

            y=y+((a[i]-48)/pow(10,i));
            k--;
        }
        double num=pow(y,1.0/n)*pow(10,(x-1)/n);
        cout<<(long long)num<<endl;
    }
    return 0;
}
