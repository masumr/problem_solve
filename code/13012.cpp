#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,e;
    while(cin>>t)
    {
        int count=0;
        for(int i=0;i<5;i++)
        {
            cin>>e;
            if(t==e)
                count++;
        }
        cout<<count<<endl;
    }
}
