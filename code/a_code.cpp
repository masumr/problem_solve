#include<bits/stdc++.h>
using namespace std;
int main()
{
    int count1=0,count2=0;
    int a,b;
    int n;
    cin>>n;
    while(n--)
    {
        cin>>a>>b;
        if(a<b) count2++;
        if(a>b) count1++;
    }
    if(count1<count2) cout<<"Chris"<<endl;
    if(count1>count2) cout<<"Mishka"<<endl;
    if(count1==count2) cout<<"Friendship is magic!^^"<<endl;
}
