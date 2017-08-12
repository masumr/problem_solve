#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll n,sum;
    while(cin>>n)
    {
        int count=0;
        int c1=0;
        if(n<0) c1++;
        else{
            sum=1;
            for(int i=1;i<=n;i++)
            {
                sum*=i;
                if(sum>6227020800){
                    count++;
                    break;
                }
            }
        }
        if(c1){
            n=-n;
            if(n%2) cout<<"Overflow!"<<endl;
            else cout<<"Underflow!"<<endl;
        }
        else if(sum<10000) cout<<"Underflow!"<<endl;
        else if(count) cout<<"Overflow!"<<endl;
        else cout<<sum<<endl;
    }
}
