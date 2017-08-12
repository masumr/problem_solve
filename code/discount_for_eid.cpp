#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,a,b,c,d;
    float k;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        float sum=a+b+c+d;
        cout<<"Case "<<i<<": ";
        if(sum<7500)
            cout<<sum<<endl;
        else if(sum>=7500 && sum<10000){
            k=sum/10;
            cout<<(int)(sum-k)<<endl;
        }
        else{
            k=sum/5;
            cout<<(int)(sum-k)<<endl;
        }
    }
}
