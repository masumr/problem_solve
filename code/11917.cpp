#include<cstdio>
#include<map>
#include<string>
#include<iostream>
using namespace std;
int main()
{
    int t,n,cases=0;
    cin>>t;
    while(t--)
    {
        cin>>n;
        map<string,int>mp;
        string x;
        int d;
        getchar();
        for(int i=0;i<n;i++)
        {
            cin>>x>>d;
            mp[x]=d;
        }
        int nt;
        cin>>nt;
        string ans;
        getchar();
        cin>>ans;
        int anss=mp[ans];
        printf("Case %d: ",++cases);
        if(anss>0&&anss<=nt)
        {
            printf("Yesss\n");
        }
        else if(anss>nt&&anss<=nt+5)
            printf("Late\n");
        else
            printf("Do your own homework!\n");
    }
}
