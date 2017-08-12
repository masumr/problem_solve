#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b) return (b==0)?a:gcd(b,a%b);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b;
        cin>>a>>b;
        int t=b/a;
        int count=0;
        if(b%a!=0) count++;
        int sum=0;
        for(int i=t;i<=b;i+=t)
        {
            if(i/gcd(a,i)==t){
                sum=i;
                break;
            }
        }
        if(count) cout<<"NO SOLUTION"<<endl;
        else cout<<sum<<endl;
    }
}
