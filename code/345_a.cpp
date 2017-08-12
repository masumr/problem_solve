#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int count=0;
    if(a<=1 & b<=1)
        count=0;
    else{
        while(a!=0 && b!=0)
        {
            if(a<b)
            {
                b-=2;
                a+=1;
                count++;
            }
            else
            {
                a-=2;
                b+=1;
                count++;
            }
        }
    }
    cout<<count<<endl;
}
