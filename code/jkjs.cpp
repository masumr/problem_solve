#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int n,sum=0;
    cin>>n;
    int a;
    int count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        if(a==1){
            cout<<2<<endl;
            continue;
        }
        if(a%2)
        {
            a--;
            sum++;
        }
        sum+=(a-1);
        if(sum%2)
            cout<<1<<endl;
        else
            cout<<2<<endl;
    }
}
