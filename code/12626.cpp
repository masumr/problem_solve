#include<bits/stdc++.h>
using namespace std;
int main()
{
    string b;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>b;
        int x=b.size();
        int c[6];
        memset(c,0,sizeof(c));
        for(int i=0;i<x;i++)
        {
            if(b[i]=='M') c[0]++;
            else if(b[i]=='A') c[1]++;
            else if(b[i]=='R') c[2]++;
            else if(b[i]=='G') c[3]++;
            else if(b[i]=='I') c[4]++;
            else if(b[i]=='T') c[5]++;
        }
        c[1]/=3;
        c[2]/=2;
        sort(c,c+6);
        cout<<c[0]<<endl;
    }
}
