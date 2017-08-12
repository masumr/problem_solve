#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    int max=0;
    cin>>n>>d;
    vector<char>a;
    char b;
    int i,j,count=0;
    for(i=0;i<d;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>b;
            a.push_back(b);
        }
        sort(a.begin(),a.end());
        if(a.begin()=='0')
            count++;
        else
        {
            if(max<count)
                max=count;
            count=0;
        }
    }
    if(max>count)
        cout<<max<<endl;
    else
        cout<<count<<endl;
}
