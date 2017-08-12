#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char b[n+5];
    int a[n+5];
    cin>>b;
    int min,sum;
    int count=0;
    int j;
    for(int i=0;i<n;i++)
        cin>>a[i];
    int min;
    for(int i=0;i<n;i++)
    {
        if(b[i]=='R' && b[i+1]=='L')
        {
                min=(a[i+1]-(a[i]))/2;
                count++;
                j=i+1;
                break;
        }
        j=i;
    }
    for(int i=j;i<n;i++)
    {
        if(b[i]=='R')
        {
            if(b[i+1]=='L'){
                sum=(a[i+1]-(a[i]))/2;
                if(sum<min)
                    min=sum;
                count++;
                i++;
            }
        }
    }
    if(count!=0)
        cout<<min<<endl;
    else
        cout<<-1<<endl;
}
