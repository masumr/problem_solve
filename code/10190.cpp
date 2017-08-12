#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll m,n;
    vector<ll>a;
    while(cin>>m>>n)
    {
        ll i=0;
            if((n<2 || m<n) || m==1){
                cout<<"Boring!"<<endl;
            }
            else{
                while(m>=1){
                        a.push_back(m);
                        m/=n;
                        if(m%n!=0)
                            break;
                    }
                if(m==1)
                {
                    for(ll k=0;k<a.size();k++){
                        cout<<a[k]<<" ";
                    }
                    cout<<1<<endl;
                }
                else{
                        cout<<"Boring!"<<endl;
                }

            a.clear();
        }
    }
}
