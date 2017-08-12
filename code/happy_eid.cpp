#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t;
    int a[100],b[100];
    cin>>t;
    for(i=1;i<=t;i++)
    {
        b[100]={0};
        int n;
        cin>>n;
        int sum2=0;
        for(int k=0;k<n;k++){
            cin>>a[k];
            sum2+=a[k];
        }
        int count=0;
        sort(a,a+n);
        int sum=0,sum1=0;
        for(int k=n-1;k>=0;k--)
        {
            if(b[k]==0){
                for(int j=k-1;j>=0;j--)
                {
                    if(b[j]==0)
                    {
                        sum1=sum+(a[k]+a[j]);
                        if(sum1<=sum2/3)
                        {
                            sum=sum1;
                            b[j]=1;
                            if(sum==sum2/3){
                                count++;
                                sum=0;
                            }
                        }
                    }
                }
            }
        }
        cout<<count<<endl;
        if(count==3)
            printf("Case %d: Eid Makes Happy Everyone\n",i);
        else
            printf("Case %d: :(\n",i);
    }
}
