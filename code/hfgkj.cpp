#include<bits/stdc++.h>
using namespace std;
int prime(int n)
{
    int i;
    for(i=2;i<=sqrt(n);i++)
        if(n%i==0)
            return 0;
    return 1;
}
int main()
{
    int a,count,i,count2;
    while(cin>>a){
        if(a==0)
            break;
        else{
            count=0;
            count2=0;
            for(i=a;;i++)
            {
                if(prime(i)==1){
                    break;
                }
                count++;
            }
            for(i=a;;i--)
            {
                if(prime(i)==1){
                    break;
                }
                count2++;
            }
            if(count>count2)
                cout<<a<<" : "<<count2<<endl;
            else
                cout<<a<<" : "<<count<<endl;
        }
    }
    return 0;
}
