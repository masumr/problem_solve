#include<bits/stdc++.h>
#define For(i,a,b) for(i=a;i<=b;i++)
using namespace std;
int main()
{
    char a[10000],b[10000];
    while(gets(a))
    {
        gets(b);
        int x=strlen(a);
        sort(a,a+x);
        int y=strlen(b);
        sort(b,b+y);
        int k=0,i,j;
        For(i,0,x-1){
            For(j,k,y-1)
            {
                if(a[i]==b[j])
                {
                    cout<<a[i];
                    k=j+1;
                    break;
                }
            }
        }
        cout<<endl;
    }
}
