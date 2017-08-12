#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int s=sqrt(n);
        int a[s+2];
        int c=0;
        for(int j=1;j<=s;j++)
        {
            int sum=(n-(j*j));
            if(sum%j==0)
                a[c++]=sum;
        }
        printf("Case %d: ",i);
        if(a[c-1]==0)
            c--;
        for(int j=c-1;j>=0;j--){
            cout<<a[j];
            if(j>0)
                cout<<' ';
        }
        cout<<endl;
    }
}
