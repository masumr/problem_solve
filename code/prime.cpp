#include<bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    if(n>=2)
    {
        if(n==2)
            return true;
        if(n%2==0)
            return false;
        for(int i=3;i*i<=n;i++)
            if(n%i==0)
                return false;
        return true;
    }
    return false;
}
int main()
{
    int a;
    while(cin>>a && a!=0)
    {
        if(isprime(a)==true)
            cout<<"this numbeer is prime"<<endl;
        else
            cout<<"not prime"<<endl;
    }
}
