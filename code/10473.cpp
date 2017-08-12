#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x;
    stringstream ss;
    ss<<x;
    ss>>hex>>y;
   cout<<y<<endl;
   ss.clear();
   int a,b;
   cin>>a;
   ss<<a;
   ss>>dec>>b;
   cout<<b<<endl;
}
