#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        int x=strlen(a);
        char b=a[0];
        printf("Case %d: ",i);
        for(int j=1;j<x;j++)
        {
            int sum=0;
            while(a[j]>='0' && a[j]<='9')
            {
                sum=(sum*10)+((int)a[j]-48);
                j++;
            }
            for(int k=1;k<=sum;k++)
                cout<<b;
            b=a[j];
        }
        cout<<endl;
    }
}
