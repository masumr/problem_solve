#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    while(cin>>n)
    {
        sum=n;
        int count=0;
        while(n>=3)
        {
            sum+=n/3;
            n=(n/3)+(n%3);
            if(n==2)
                sum++;

        }
        cout<<sum<<endl;
    }
}
