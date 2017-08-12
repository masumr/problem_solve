#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>a;
    int n;
    cin>>n;
    int i=0;
    int sum;
    while(n!=0)
    {
        sum=n%10;
        a.push_back(sum);
        n/=10;
        i++;
    }
    for(int k=a.size()-1;k>=0;k--)
        cout<<a[k];
    for(int j=0;j<a.size();j++)
        cout<<a[j];
    cout<<endl;
}
