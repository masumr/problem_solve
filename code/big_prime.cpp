#include<bits/stdc++.h>
using namespace std;
void isprime(bool a[],int hi)
{
    int m=sqrt(hi);
    a[0]=true;
    a[1]=true;
    a[2]=false;
    for(int i=3;i<=m;i++)
    {
        if(a[i]==false)
        {
            for(int j=i;j<=hi;j+=i)
                a[j]=true;
        }
    }
}
void bigprime(bool b[],bool c[],int x)
{
    int x1=sizeof(b)/sizeof(b[0]);
    int z=sizeof(c)/sizeof(c[0]);
    memset(c,false,sizeof(b));
    int y=0;
    for(int i=0;i<x1;i++)
    {
        if(c[y]==false)
        {
            for(int  j=0;j<z;j++)
            {
                if((j+x)%b[i]==0)
                    c[y]=true;
            }
        }
        else
        {
            y++;
        }
    }

}
int main()
{
    int x,y;
    cin>>x>>y;
    int value=sqrt(x);
    if(x>y)
        swap(x,y);
    bool a[value],b[x],c[y-x+1];
    isprime(a,value-1);
    int k=0;
    for(int i=0;i<=value;i++)
    {
        if(a[i]==false)
        {
            b[k++]=i;
        }
    }
    bigprime(b,c,x);
    for(int i=0;i<(y-x);i++)
    {
        if((c[i]==false)
           cout<<i+x<<' ';
    }


}
