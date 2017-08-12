#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[1000];
    int n,x,y,i,j,b;
    while(cin>>n)
    {
        if(n==0)
            return 0;
        scanf(" ");
        gets(a);
        x=strlen(a);
        y=x/n;
        for(i=1;i<=n;i++)
        {
            b=i*y;
            for(j=b-1;j>=b-y;j--){
                cout<<a[j];
            }
        }
        cout<<endl;
    }
    return 0;
}
