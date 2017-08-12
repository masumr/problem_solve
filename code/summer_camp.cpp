#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string a,b;
    a="";
     stringstream ss;
    for(int i=1;i<=1000;i++)
    {

        ss<<i;
        ss>>b;
        a+=b;
        ss.clear();
    }
    cin>>n;
    cout<<a[n-1]<<endl;
}
