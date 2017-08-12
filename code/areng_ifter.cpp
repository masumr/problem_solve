#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1[1000],s3,s;
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int count,k,count1=0,count2=0;
        int n;
        cin>>n;
        cin>>s;
        for(int j=0;j<n*2;j++)
        {
            cin>>s1[j];

        }
        printf("Case %d: ",i);
        count=1;
        for(int j=0;j<(n*2);j++)
        {
            count2++;
            if(s==s1[j]){
                break;
            }
            else{
                count++;
            }
        }
        int a[1000]={0};
        for(int j=0;j<count2-1;j++)
        {
            if(a[j]==0)
            {
                for(int k=j+1;k<count2;k++)
                {
                    if(s1[j]==s1[k])
                    {
                        count1++;
                        a[k]=1;
                    }
                }
            }
        }
        cout<<count-count1<<endl;


    }
}
