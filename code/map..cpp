#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<pair<int,int>,int>a;
    map<int,int>x;
    map<int,int>y;
    int t;
    cin>>t;
    int b,c;
    for(int i=0;i<t;i++)
    {
        cin>>b>>c;
        x[i]=b;
        y[i]=c;
        a[make_pair(b,c)]++;
    }
    for(int i=0;i<t;i++)
    {
        cout<<"new averge:"<<endl;
        while(a[make_pair(x[i],y[i])]==i+1)
        {
            cout<<x[i]<<' '<<y[i]<<endl;
            i++;
        }
    }
}
