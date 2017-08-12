#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            return 0;
        cout<<(int)sqrt(b)-(int)sqrt(a-1)<<endl;
    }
}
