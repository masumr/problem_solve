#include<bits/stdc++.h>
using namespace std;
int main()
{
    int coin[3]={0,1,3,4};
    int nots[11];
    memset(nots,0,sizeof(nots));
    nots[0]=1;
    for(int i=0;i<3;i++)
    {
        for(int j=coin[i];j<6;j++)
        {
            nots[j]+=nots[j-coin[i]];
        }
    }
    int n=6;
    for(int i=0;i<n;i++)
        cout<<nots[i]<<' ';

    }

