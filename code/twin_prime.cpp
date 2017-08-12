#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
bool a[20000044];
int b[1000000];
int p[1000000];
int num=20000044;
void isprime()
{
    int m=sqrt(num)+1;
    a[0]=true;
    a[1]=true;
    a[2]=false;
    for(int i=2;i<=m;i++)
    {
        if(a[i]==false)
        {
            for(int j=i*i;j<=num;j+=i)
                a[j]=true;
        }
    }
    int c=0;
    for(int i=0;i<=num;i++)
    {
        if(a[i]==false){
            b[c]=i;
            c++;
        }
    }
    int n=1;
   for(int k=0;k<c-1;k++)
    {
        int sum=(b[k+1]-b[k]);
        if(sum==2){
            p[n]=b[k];
            n++;
        }
    }
}
int main()
{
    int x;
    isprime();
    while(cin>>x)
        printf("(%d, %d)\n",p[x],p[x]+2);
}
