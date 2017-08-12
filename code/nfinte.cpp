#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count=0;
    if(c==0)
    {
        if(a==b)
            count++;
    }
    else
    {
        if(a==b)
            count++;
        else if(a<b && c>0)
        {
            if((b-a)%c==0)
                count++;
        }
        else if(a>b && c<0)
        {
            c*=-1;
            if((b-a)%c==0)
                count++;
        }
    }
    if(count!=0)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

}
