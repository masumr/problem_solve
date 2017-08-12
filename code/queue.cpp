#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>a;
    int i,t,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        a.push(n);
    }
    while(!a.empty())
    {
        cout<<a.front()<<' ';
        a.pop();
    }
}
