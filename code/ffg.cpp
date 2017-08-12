#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
        int a[3];
        for(int i=0;i<3;i++)
            cin>>a[i];
        sort(a,a+3);
        printf("Case %d: ",++c);
        if((a[0]*a[0])+(a[1]*a[1])==a[2]*a[2]) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;
    }
}
