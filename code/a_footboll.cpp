#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    cin>>a;
    int x=strlen(a);
    int count;
    for(int i=0;i<x;i++)
    {
        char n=a[i];
        count=1;
        while(a[i+1]==n)
        {
            count++;
            i++;
        }
        if(count>=7)
        {
            cout<<"YES"<<endl;
            break;
        }
    }
    if(count<7)
        printf("NO\n");
}
