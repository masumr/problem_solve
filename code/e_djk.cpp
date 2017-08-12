#include<bits/stdc++.h>
using namespace std;
set<int>count2;
int main()
{
    int i,t;
    cin>>t;
    for(i=1;i<=t;i++)
    {
        int n;
        cin>>n;
        int a[n+5];
        int b[n+5];
        for(int j=0;j<n;j++)
            cin>>a[j];
        int count=0;
        for(int j=0;j<n;j++){
            if(a[0]==a[j])
                count++;
            else
                break;
        }
        int count1=0;
        int count3=0;
        int k=count-1;
        count2.clear();
        while(count2.size()!=4)
        {
            count2.insert(a[k]);
            count1++;
            if(a[0]==a[k])
                count3++;
            k++;
        }
        if(count3!=0)
            count1--;
        printf("Case %d: %d\n",i,count1);
    }
}
