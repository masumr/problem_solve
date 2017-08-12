#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p;
    {
        int x=10;
        p=new int(20);
        cout<<x<<' '<<*p<<endl;
    }
    cout<<*p<<endl;
    delete p;
    cout<<p<<' '<<*p<<endl;
}
