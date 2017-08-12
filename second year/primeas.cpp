#include<bits/stdc++.h>
using namespace std;
const int size=1000000000;
bool mark[size];
int main()
{
    vector<int>p;
    int limit;
    cin>>limit;
    //bool mark[limit+1];
    int m=floor(sqrt(limit))+1;
    memset(mark,true,sizeof(mark));
    for(int p=2;p<=m;p++)
    {
        if(mark[p]==true)
        {
            for(int i=p*2;i<=limit;i+=p)
                mark[i]=false;
        }
    }
    for(int p=2;p<=limit;p++)
    {
        if(mark[p]==true)
            cout<<p<<'\t';
    }
}
