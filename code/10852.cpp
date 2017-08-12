#include<bits/stdc++.h>
using namespace std;
const int size=100000;
bool p[size];
void sieve()
{
    int n=sqrt(size)+1;
    p[0]=true;
    p[1]=true;
    p[2]=false;
    for(int i=2;i<=n;i++)
    {
        if(p[i]==false){
            for(int j=i*i;j<=size;j+=i)
                p[j]=true;
        }
    }
}
int main(){
    int t;
    sieve();
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int y=n/2+1;
        if(y%2==0)
            y++;
        int x;
        for(int i=y;i<=n;i+=2)
        {
            if(p[i]==false){
                cout<<i<<endl;
                break;
            }
        }
    }
}
