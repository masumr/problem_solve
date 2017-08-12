#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
int lcm(int a,int b)
{
    return (a*b)/gcd(a,b);
}
int main()
{
    int a,b,n,g;
    cin>>n;
    cin>>a;
    int i=1;
    while(i<=n-1)
    {
        cin>>b;
        int x=a,y=b;
        if(a<b){
            swap(a,b);
            swap(x,y);
        }
        a=lcm(a,b);
        g=gcd(x,y);
        i++;
    }
    int j=1;
    cout<<a<<' '<<g<<endl;
}
