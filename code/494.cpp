#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    while(getline(cin,a))
    {
        char b=1;
        int count=0;
        int x=a.size();
        for(int i=0;i<x;i++)
        {
            if(((a[i]>='a' && a[i]<='z')||(a[i]>='A' && a[i]<='Z')) && (a[i+1]<'a' || a[i+1]>'z') && (a[i+1]<'A' || a[i+1]>'Z'))
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}
