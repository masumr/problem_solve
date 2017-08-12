#include<bits/stdc++.h>
#define For(i,a,b) for(i=(a);i<=(b);i++)
using namespace std;
int main()
{
    int n,sum=0,i,j;
    cin>>n;
    For(i,1,n){For(j,1,i){sum+=j;}}
    cout<<sum<<endl;

}
