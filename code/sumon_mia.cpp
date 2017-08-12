#include<bits/stdc++.h>
using namespace std;
int main()
{

    int a[100];
    for(int i=0;i<10;i++)
        cin>>a[i];
    q_sort(a,a+n);
    for(int i=0;i<10;i++)
        cocut<<a[i]<<' ';
    cout<<endl;
}
