#include<bits/stdc++.h>
using namespace std;
int main()
{
    int p,po,i;
    cin>>p>>po;
    int a[p+2],b[p+2];
    for(i=0;i<p;i++)
        cin>>a[i];
    for(i=0;i<p;i++)
        cin>>b[i];
    int limark=0,rodewash=0,sum1,sum2=0,sum3=0,sum4;
    for(i=0;i<p;i++)
    {
        sum3+=b[i];
        sum1=a[i]-(po*sum3);
        if(sum1<0)
            sum1=0;
        limark+=sum1;
    }
    for(i=p-1;i>=0;i--)
    {
        sum2+=b[i];
        sum1=a[i]-(po*sum2);
        if(sum1<0)
            sum1=0;
        rodewash+=sum1;
    }
    if(limark>rodewash)
        cout<<"Limak"<<endl;
    else if(limark<rodewash)
        cout<<"Radewoosh"<<endl;
    else
        cout<<"Tie"<<endl;
}
