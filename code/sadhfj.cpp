#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,count,sum;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        string a;
        map<char,int>mp;
        cin>>a;
        int x=a.size();
        for(int c=0;c<x;c++)
            mp[a[c]]=1;
        for(int j=x-1;j>=0;j--)
        {
            int d=((int)a[j]-48);
            if(d%2==0)
            {
                sum=0;
                for(int k=j;k>=0;k--)
                {
                    sum+=((int)a[k]-48);
                }
                int y=sum%3;
                count=0;
                if(y!=0)
                {
                    char s=((char)y+48);
                    if(mp[s]==1){
                        sum-=y;
                        count++;
                        break;
                    }
                }
                else
                {
                    count++;
                    break;
                }
                mp[a[j]]=0;

            }
            else mp[a[j]]=0;
        }
        printf("Case %d: ",i);
        if(count!=0)
            cout<<sum<<endl;
        else
            printf("Impossible\n");
        mp.clear();
    }
}
