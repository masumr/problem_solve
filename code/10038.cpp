#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    while(cin>>n)
    {
        int a[n+1];
        for(i=0;i<n;i++)
            cin>>a[i];
        for(i=0;i<n;i++)
        {
            for(int j=0;j<n-i;j++)
            {
                if(a[j]>a[j+1])
                    swap(a[j],a[j+1]);
            }
        }
        if(a[n-1]-a[0]<=3)
            cout<<"jolly"<<endl;
        else
            cout<<"not jolly"<<endl;

    }
}
