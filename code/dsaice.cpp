#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a[3],min=4,k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        for(k=0;k<3;k++)
            cin>>a[k];
        for(k=1;k<=3;k++){
            if(a[k-1]==0)
            {
                if(min>k)
                    min=k;
            }
        }
    }
    cout<<min<<endl;
}
