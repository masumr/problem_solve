#include <boost/multiprecision/cpp_int.hpp>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    BigInteger start=0;
    BigInteger next=1;
    BigInteger _new;
    for(int i=1;i<=23;i++)
    {
        _new=next+start;
        start=next;
        next=_new;
    }
    cout<<next<<endl;
}
