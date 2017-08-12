#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int t;
    cin>>t;
    cin>>a;
    int x=a.size();
    int ans=0;
    for(int j=1;j<=t;j++){
        for(int i=0;i<x;i++)
        {
            string y=a.substr(i,i+1);
            cout<<y<<endl;
            ans+=atoi(y.c_str());

        }
        printf("Case %d: %d\n",j,ans);
    }
}
