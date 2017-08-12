#include<bits/stdc++.h>
using namespace std;
int coprime_digits(int n)
{
    int r=n;
    int k=sqrt(n);
    for(int i=2;i<=k;i++)
    {
        if(n%i==0){
            while(n%i==0)
            {
                n/=i;
            }
            r-=(r/i);
        }
        if(n>1)
            r-=(r/n);
    }
    return r;
}
int main()
{
    int n;
    cin>>n;
    cout<<coprime_digits(n)<<endl;
}
