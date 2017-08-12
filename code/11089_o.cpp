#include<bits/stdc++.h>
using namespace std;
#define SET(a) memset(a,-1,sizeof(a))
#define CLR(a) memset(a,0,sizeof(a))
#define PI acos(-1.0)
#define MOD 1000000007
#define MX 100010
int main()
{
    //ios_base::sync_with_stdio(0);cin.tie(0);
    int kk=1, tc, n, m, fibo[50];
    string s;
    cin>>tc;
    fibo[0]=fibo[1]=1;
    for(int i=2;i<=45;i++)
        fibo[i]=fibo[i-1]+fibo[i-2];
    //cout<<fibo[45]<<endl;
    while(tc--){
        cin>>n;
        //cout<<"Case "<<kk++<<": ";
        int pos=44;
        while(fibo[pos]>n) pos--;
        while(pos){
            if(n>=fibo[pos])
            {
                cout<<"1";
                n-=fibo[pos];
            }
            else cout<<"0";
            pos--;
        }
        cout<<"\n";
    }
    return 0;
}
