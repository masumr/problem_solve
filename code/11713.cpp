#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[30],b[30];
    int count1,count2,count3;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        cin>>a>>b;
        int x=strlen(a);
        int y=strlen(b);
        if(x==y)
        {
            count1=0;
            count2=0;
            count3=0;
            for(int j=0;j<x;j++)
            {
                if(a[j]=='a' || a[j]=='e' || a[j]=='i' || a[j]=='o' || a[j]=='u' )
                    count1++;
                else
                {
                    if(a[j]==b[j])
                        count2++;
                    else
                        count3++;
                }
            }
            if(count3==0)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;


        }
        else
            cout<<"No"<<endl;
    }
}
