#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,d,e[4];
    int t;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>a>>b>>c>>d;
        for(int j=0;j<3;j++)
            cin>>e[j];
        sort(e,e+3);
        float ans=a+b+c+d;
        ans+=(e[1]+e[2])/2;
        printf("Case %d: ",i);
        if(ans>=90) cout<<'A';
        else if(ans>=80)cout<<'B';
        else if(ans>=70)cout<<'C';
        else if(ans>=60)cout<<'D';
        else if(ans<60)cout<<'F';
        cout<<endl;
    }
}
