#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int c[100000];
int main()
{
    ll n;
    c[0]=1;c[1]=1;
    while(cin>>n)
    {
        if(n==1)
            cout<<1<<endl;
        else{
            int i=2,count=0;
            while(1)
            {
                c[i]=0;
                for(int j=0;j<i;j++)
                {
                    c[i]+=c[j]*c[i-j-1];
                    if(c[i]==n)
                    {
                        cout<<i<<endl;
                        count++;
                        break;
                    }
                }
                i++;
                if(count==1)
                    break;
            }
        }
    }
}
