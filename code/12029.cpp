#include<bits/stdc++.h>
using namespace std;
map<int,string>d;
int main()
{
    int m[13];
    d[1]="Saturday";d[2]="Sunday";d[3]="Monday";d[4]="Tuesday";d[5]="Wednesday";d[6]="Thursday";d[0]="Friday";
    m[1]=0;m[2]=m[1]+31;m[3]=m[2]+28;m[4]=m[3]+31;m[5]=m[4]+30;m[6]=m[5]+31;m[7]=m[6]+30;m[8]=m[7]+31;m[9]=m[8]+31;m[10]=m[9]+30;m[11]=m[10]+31;m[12]=m[11]+30;
    int t;
    cin>>t;
    while(t--)
    {
        int m1,d1;
        cin>>m1>>d1;
        int sum=(m[m1]+d1);
        sum%=7;
        cout<<d[sum]<<endl;
    }
}
