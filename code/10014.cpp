#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,n;
    cin>>t;
    for(int j=1;j<=t;j++){
        if(j!=1) cout<<endl;
        cin>>n;
        double a,b,c;
        cin>>a>>b;
        double x,sum=0;
        for(int i=n-1;i>=0;i--)
        {
            cin>>x;
            sum+=(2*(i+1)*x);
        }
        //cout<<sum<<endl;
        double s=(((n)*a)+b)-sum;
        printf("%.2lf\n",s/(n+1));
    }
}
