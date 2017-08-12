#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int a[n+5];
   for(int i=1;i<n;i++)scanf("%d",&a[i]);
    int x,y;
    cin>>x>>y;
    int k=0;
    int sum=0;
    for(int i=x;i<y;i++)sum+=a[i];
    cout<<sum<<endl;
}
