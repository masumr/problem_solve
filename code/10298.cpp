#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(cin>>a)
    {
        char f='a';
        int x=a.size();
        int count=0;
        for(int i=0;i<x;i++)
        {
            if(f==a[i])
                count++;
        }
        cout<<count<<endl;
    }
}
