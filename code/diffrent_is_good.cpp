#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char b;
    set<char>a;
    for(int i=0;i<n;i++)
    {
        cin>>b;
        a.insert(b);
    }
    int x=a.size();
    cout<<((n>26)? -1:n-x)<<endl;
}
