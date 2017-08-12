#include<bits/stdc++.h>
using namespace std;
set<string>b;
int main()
{
    int i,t;
    cin>>t;
    string a,c;
    for(i=1;i<=t;i++)
    {
        cin>>a;
        int x=a.size();
        b.clear();
        //c.clear();
        for(int j=0;j<x;j++)
        {
            c="";
            for(int k=0;k<x-j;k++)
            {
                c.clear();
                for(int l=k;l<=k+j;l++){
                    c+=a[l];
                }
                b.insert(c);
            }

        }
        printf("Case %d: %d\n",i,b.size());
    }
}
