#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll sum=5;
        int n;
        cin>>n;
        for(int i=2;i<n;i++)
            sum+=i;
        cout<<sum<<endl;
    }

}
