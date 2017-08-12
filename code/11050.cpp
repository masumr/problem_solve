#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum;
    while(cin>>n)
    {
        sum=0;
        int count=0;
        while(n)
        {
            sum+=n;
            if(n%3!=0){
                count+=n%3;
            }
            n=n/3;

        }
        int k=count/3;
        if(count%3!=0)
            k+=1;
        cout<<sum+k<<endl;
    }
}
