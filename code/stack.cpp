#include<bits/stdc++.h>
using namespace std;
int main()
{
    queue<int>a;
    stack<int>b;
    int i,t,n;
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>n;
        a.push(n);
        b.push(n);
    }
    while(!a.empty())
    {
        cout<<a.front()<<' ';
        a.pop();
    }
    cout<<endl;
    while(!b.empty())
    {
        cout<<b.top()<<' ';
        b.pop();
    }
}
