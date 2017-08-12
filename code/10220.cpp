#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int a[1000000];
int main()
{
    int t;
    while(cin>>t){
        int m=1,temp=0,x;
        a[0]=1;
        for(int i=1;i<=t;i++)
        {
            for(int j=0;j<m;j++)
            {
                x=(i*a[j])+temp;
                a[j]=x%10;
                temp=x/10;
            }
            while(temp>0)
            {
                a[m]=temp%10;
                temp/=10;
                m++;
            }
        }
        ll sum=0;
        for(int i=m-1;i>=0;i--)
                sum+=a[i];
        cout<<sum<<endl;
    }
}
