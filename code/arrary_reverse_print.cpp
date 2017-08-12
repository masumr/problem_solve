#include<bits/stdc++.h>
using namespace std;
const int size=10;
int array[size];
template<typename T>
void reverse_print_array(T lo,T hi)
{
    if(lo==hi)
        return;
    reverse_print_array(lo+1,hi);
    cout<<array[lo]<<' ';
}
int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>array[i];
    reverse_print_array(0,n);
}
