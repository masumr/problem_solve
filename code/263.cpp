#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(cin>>a)
    {
        if(atol(a.c_str())==0)
            break;
        int count=0;
        sort(a.begin(),a.end());
        cout<<"Original number was "<<a<<endl;
        cout<<"Chain length "<<count<<endl;

    }
}
