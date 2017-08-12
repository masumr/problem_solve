#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,count=0,i,j,sum;
    cin>>a>>b;
    sum=a*b;
    count=sum/5;
    if(sum%5==4)
        count+=1;
    cout<<count<<endl;
}
