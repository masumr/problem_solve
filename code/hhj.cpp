#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=11,sum=0,k=0;
    while(n)
    {
        sum=sum+(n%2)*pow(10,k++);
        n/=2;
    }
    cout<<sum<<endl;
}
