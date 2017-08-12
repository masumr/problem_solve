#include<bits/stdc++.h>
using namespace std;
int count9s(char *a)
{
    int n=strlen(a);
    int count=0;
    for(int i=0;i<n;i++)
    {
        int sum=(int)(a[i]-48);
        if(a[i]=='9')
            count++;
        for(int j=i+1;j<n;j++)
        {
            sum=(sum+a[j]-48)%9;
            if(sum==0)
                count++;
        }
    }
    return count;
}
int main()
{
    char x[100];
    cin>>x;
    cout<<count9s(x)<<endl;
}
