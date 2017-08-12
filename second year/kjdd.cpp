#include <bits/stdc++.h>

using namespace std;
typedef long long int lng;

int main()

{
    int n,x,y,z,tst,p,q,c,d;
    cin>>p>>q>>x>>y;
    {
        map<lng,bool>mp,mpp;
        if(q==y)
        {
            cout<<q<<endl;
            return 0;
        }
        if(!p || !x)
        {
            cout<<-1<<endl;
            return 0;
        }
        for(int i=1; i<10000; i++)
            mp[q+(p*i)]=1;
        for(int i=1; i<10000; i++)
        {
            if(mp[y+(x*i)]==1)
            {
                cout<<y+x*i<<endl;
                return 0;
            }
        }
        cout<<-1<<endl;
    }
    return 0;
}
