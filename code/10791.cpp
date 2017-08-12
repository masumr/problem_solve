#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long i,n,t,sum,count=1;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        else{
            t=sqrt(n);

            for(i=t;i>=1;i--)
            {
                if(n%i==0)
                {
                    sum=i+(n/i);
                    break;
                }
            }
            printf("Case %ld: ",count);
            cout<<sum<<endl;
            count++;
        }
    }
    return 0;
}
