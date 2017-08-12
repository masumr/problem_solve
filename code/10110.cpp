#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,r;
    while(cin>>n)
    {
        if(n==0)
            break;
        r=sqrt(n);
        if(r*r==n)
            printf("yes\n");
        else
            printf("no\n");
    }
    return 0;
}
