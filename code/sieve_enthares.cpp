#include<bits/stdc++.h>
using namespace std;
bool array[1000000];
void prime()
{
    int m=1000000;
    int limit=sqrt(m)+2;
    array[0]=true;
    array[1]=true;
    array[2]=false;
    for(int i=2;i<=limit;i++)
    {
        if(array[i]==false)
        {
            for(int j=i*i;j<=m;j+=i)
                array[j]=true;
        }
    }
}
int main()
{
    int a;
    prime();
    while(cin>>a && a!=0)
    {
        if(array[a]==false)
            cout<<"this numbeer is prime"<<endl;
        else
            cout<<"not prime"<<endl;
    }
}
