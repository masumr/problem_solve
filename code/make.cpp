#include<bits/stdc++.h>
using namespace std;
map<int,int>mp;
int main()
{
    int t,c=0;
    cin>>t;
    while(t--)
    {
            string a;
            cin>>a;
            int count=0,count1=0;
            int sum;
            printf("Case %d: ",++c);
            mp[0]=1;
            for(int i=0;i<a.size();i++)
            {
                int x=a[i]-48;
                mp[x]=1;
            }
            for(int i=a.size()-1;i>=0;i--)
            {
                int x=a[i]-48;
                if(x==0)
                    count1++;
                if(x%2==0)
                {
                    sum=0;
                    int j=i;
                    while(j>=0){
                        sum+=(a[j]-48);
                        j--;
                    }
                    int s=sum%3;
                    if(mp[s]){
                        sum-=s;
                        count++;
                        break;
                    }
                }
                mp[x]=0;
            }
            if(count) cout<<sum<<endl;
            else{
                if(count1!=0)cout<<0<<endl;
                else cout<<"Impossible"<<endl;
            }
            mp.clear();
    }
}
