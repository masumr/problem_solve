#include<bits/stdc++.h>
using namespace std;
const int size=1000007;
int c4[size];
int c7[size];
int main()
{
    int n;
    cin>>n;
    if(n==4 || n==7)
    {
        cout<<n<<endl;
        return 0;
    }
    if(n%7==0){
        if(n%7==0)
        {
            n/=7;
            for(int i=0; i<n; i++)cout<<7;
            cout<<endl;
        }
        return 0;
    }
    int sum=0,k=0;
    while(sum<=n)
    {
        sum+=4;
        c4[k++]=sum;
    }
    int t=0;
    sum=0;
    while(sum<=n)
    {
        sum+=7;
        c7[t++]=sum;
    }
    bool ck=0;
    for(int i=0; i<k; i++)
    {
        for(int j=0; j<t; j++)
        {
            //cout<<c7[j]+c4[i]<<' ';
            if(c7[j]+c4[i]==n)
            {
                ck=1;
                for(int kk=0; kk<=i; kk++)cout<<4;
                for(int kk=0; kk<=j; kk++)cout<<7;
                break;
            }
        }
        if(ck)break;
    }
    if(!ck)
    {
        if(n%4==0)
        {
            n/=4;
            for(int i=0; i<n; i++)cout<<4;
            cout<<endl;
        }
        else  cout<<-1<<endl;
    }

}
