#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=3;i++)
    {
        if(i%2==1)
            cout<<"I hate ";
        else
            cout<<"I love ";
        if(i!=n)
            cout<<"that ";
        else
            cout<<"it";
    }
    cout<<endl;
}