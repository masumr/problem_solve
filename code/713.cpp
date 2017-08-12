#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int c[300];
    while(cin>>a>>b)
    {
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        cout<<a<<endl<<b<<endl;
        int x=a.size()-1;
        int y=b.size()-1;
        int sum=0,k=0;
        char n='0';
        while(x>=0 && y>=0)
        {
            sum=sum+((a[x-1]-n)+(b[y-1]-n));
            c[k]=sum%10;
            if(c[k]<0)
                c[k]*=-1;
            sum=sum/10;
            k++;
            x--;
            y--;
        }
        cout<<k<<endl;
        //reverse(c.begin(),c.end());
        for(int i=0;i<k;i++)
            cout<<c[i];
        cout<<endl;

    }
}
