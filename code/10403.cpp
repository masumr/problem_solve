#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    char a[100],b[100];
    int money,sum=0;
    while(t--)
    {
        cin>>a;
        if(strcmp("donate",a)==0){
            cin>>money;
            sum=sum+money;
        }
        else
            cout<<sum<<endl;
    }
}
