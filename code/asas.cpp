#include<bits/stdc++.h>
using namespace std;
#define MAX 2^31+2
typedef long long int ll;
ll sum(ll b){
    return (b*(b+1))/2;
}
long long A,B,sum1=0,i;
int main()
{
    int t,cnt,cases=0;
    cin>>t;
    while(t--)
    {
        cin>>A>>B;
        cnt=0;
        sum1=sum(A-1);
        for(i=A;i<=B;i++)
        {
            sum1+=i;
            sum1=sum1%3;
            if(sum1==0)
                cnt++;
        }
        printf("Case %d: ",++cases);
        cout<<cnt<<endl;
    }
}
