#include<bits/stdc++.h>
using namespace std;
int isprime(int n)
{
    for(int i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
        return 1;
}
int main()
{
    int k=6;
    cout<<"The 1500'th ugly number is "<<1<<","<<3<<","<<4<<","<<5<<",";
    int count=5;
    while(count<=1500)
    {
        if(isprime(k)==0){
            printf("%d,",k);
            count++;
        }
        k++;
    }
    cout<<endl;
}
