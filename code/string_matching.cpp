#include<bits/stdc++.h>
using namespace std;
int match(char *a,char *b)
{
    int i,j,n,m,p=-1,e;
    n=strlen(a);
    m=strlen(b);
    for(i=0;i<=(n-m);i++)
    {
        p=e;
        e=i;
        for(j=0;j<=m;j++)
        {
            if(b[j]==a[e])
                e++;
            else
                break;
        }
        if(j<m)
            return p;
    }
    return -1;
}
int main()
{
    char x[100],y[100];
    gets(x);
    gets(y);
    int position=match(x,y);
    if(position!=-1)
        cout<<"found the value is "<<position<<endl;
    else
        cout<<"not found"<<endl;
}
