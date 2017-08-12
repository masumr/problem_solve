#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x,y;
    int a[1001];
    while(cin>>x>>y)
    {
        memset(a,0,sizeof(a));
        int mx=0,x1=0;
        for(int i=x.size()-1;i>=0;i--)
        {
            int k=x1;
            int temp=0;
            for(int j=y.size()-1;j>=0;j--)
            {
                a[k]+=(((int)x[i]-48)*((int)y[j]-48))+temp;
                temp=a[k]/10;
                a[k++]%=10;
            }
            x1++;
            a[k]=temp;
            if(mx<k)
                mx=k;
        }
        while(a[mx]==0)
            mx--;
        if(mx<0)
            cout<<0;
        for(int i=mx;i>=0;i--)
            cout<<a[i];
        cout<<endl;
    }
}
