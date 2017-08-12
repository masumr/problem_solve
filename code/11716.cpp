#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int i,t,j,k;
    cin>>t;
    getchar();
    for(int i=1;i<=t;i++)
    {
        getline(cin,a);
        int len=a.size();
        int s=sqrt(len);
        if(s*s==len)
        {
            for(j=0;j<s;j++)
            {
                for(k=j;k<len;k+=s)
                {
                    cout<<a[k];
                }
            }
            cout<<endl;
        }
        else
            cout<<"INVALID"<<endl;

    }
}
