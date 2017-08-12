#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,max=0,sum;
    cin>>a>>b>>c;
    sum=a+(b*c);
    if(max<sum)
        sum=max;
    sum=a*(b+c);
    if(max<sum)
        max=sum;
    sum=a*b*c;
    if(max<sum)
        max=sum;
    sum=(a+b)*c;
    if(sum>max)
        max=sum;
    cout<<max<<endl;
}
