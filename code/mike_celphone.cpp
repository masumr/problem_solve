#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[10];
    int n;
    cin>>n;
    int count1=0;
    int count2=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int count=0;
    for(int i=1;i<n;i++)
    {
        int sum=abs((int)a[i]-(int)a[i-1]);
        int sum1=(int)a[i]-48;
        if(sum==2 && sum1%3!=1)
            count++;

    }
    if(count!=0)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

}
