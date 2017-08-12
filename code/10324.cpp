#include<bits/stdc++.h>
using namespace std;
char a[2000000];
int main()
{
    long long x,i,y,n,m,count=1,j;
    while(cin>>a)
    {
        x=strlen(a);
        if(x==0)
            break;
        cin>>y;
        for(i=0;i<y;i++)
        {
            if(i==0)
                cout<<"Case "<<count<<":"<<endl;
            cin>>n>>m;
            if(n>m)
                swap(n,m);
            for(j=n;j<m;j++)
                {
                if(a[j]!=a[j+1])
                    {
                    printf("No\n");
                    break;
                    }
                }
            if(j==m)
                cout<<"Yes"<<endl;
        }
        count++;
    }
}
