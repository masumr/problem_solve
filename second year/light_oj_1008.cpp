#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll number;
    ll i,t;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>number;
        ll x=sqrt(number);
        if(x*x!=number)
            ++x;
        ll row,cloumn;
        if(x%2==0)
        {
            ll q=(x*x)-number;
            if(q==0)
            {
                row=x;
                cloumn=1;
            }
            else{
                if(x>q){
                    cloumn=(q+1);
                    row=x;
                }
                else
                {
                    ll p=(x-1)*(x-1);
                    ll y=number-p;
                    cloumn=x;
                    row=y;
                }
            }
        }
        else
        {
            ll q=(x*x)-number;
            if(q==0)
            {
                cloumn=x;
                row=1;
            }
            else{
                if(x>q){
                    row=(q+1);
                    cloumn=x;
                }
                else
                {
                    ll p=(x-1)*(x-1);
                    ll y=number-p;
                    cloumn=y;
                    row=x;
                }
            }
        }
        printf("Case %lld: ",i);
        cout<<row<<' '<<cloumn<<endl;
    }
}
