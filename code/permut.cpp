#include<bits/stdc++.h>
using namespace std;
string ch;
void swap(char *a,char *b)
{
    char temp=*a;
    *a=*b;
    *b=temp;
}
int i=0;
void permuation(int l,int r)
{
    if(l==r)
    {
        printf("Case %d: %s",++i,ch);
    }
    else
    {
        for(int i=l;i<=r;i++)
        {
            swap(ch+l,ch+i);
            permuation(i,l);
            swap(a+l,a+r);
        }
    }
}
int main()
{
    string a;
    cin>>a;
    permuation(0,sizeof(a)-1);
}
