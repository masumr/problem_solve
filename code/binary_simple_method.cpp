#include<bits/stdc++.h>
using namespace std;
int countsetbits(int n)
{
    int count=0;
    while(n)
    {
        count+=n&1;
        n>>=1;
    }
    return count;
}
int main()
{
    int n=9;
    cout<<countsetbits(n)<<endl;
}
