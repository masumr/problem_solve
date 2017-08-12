#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[10];
    for(int i=0;i<10;i++)
    {
        cin>>a[i];
    }
    if(binary_search(a,a+9,5)>=0)
        printf("found\n");
    else
        printf("not found\n");
}
