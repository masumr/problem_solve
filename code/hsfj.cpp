#include<iostream>
using namespace std;
int main()
{
    int a[10]={0};
    int x;
    int count=0;
    while(count<10)
    {
        cin>>x;
        a[x%10]++;
        count++;
    }
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<a[i%10];j++)
            cout<<i<<' ';
    }
    cout<<endl;
}
