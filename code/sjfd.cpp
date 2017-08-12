//Masum Rana
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string x;
    cin>>n;
    cin>>x;
    int cnt=0,cnt1=0,mx,a,b;
    int sum=0,i=0;
    while(i<n)
    {
        if(x[i]=='<')
            {
                cnt++;
                a=i;
            }
        else
            break;
        i++;
    }
    sum+=cnt;
    i=n-1;
    while(i>=0)
    {
        if(x[i]=='>')
            {
                cnt1++;
                b=i;
            }
            else
                break;
            i--;
    }
    sum+=cnt1;
    cout<<sum<<endl;
}
