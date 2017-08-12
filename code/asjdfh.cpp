#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count1=0,count2=0,sum=0,m=0;
    vector<int>a;
    vector<int>b;
    int x,y,n;
    cin>>n;
    while(n--)
    {
        cin>>x>>y;
        if(x<0)
            x*=-1;
        if(y<0)
            y*=-1;
        if(x>y)
            swap(x,y);
        a.push_back(x);
        b.push_back(y);
    }
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    int xa=a.size();
    for(int i=xa-1;i>=0;i--)
    {

        for(int j=i-1;j>=0;j--)
        {
            if(a[i]==a[j] || b[i]==b[j]){

                    count1++;
            }
            else
            {
                i=j;
                break;
            }
        }
    }
    cout<<count1<<endl;
}
