#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
char a[1000001];
int main()
{
    int m[100];
    for(int i=0;i<100;i++)
        m[i]=i%3;
    ll value;
    while(cin>>a)
    {
        value=0;
        //int x=a.size();
        //sort(a.begin(),a.end());
        int i=0;
        while(a[i])
        {
            if(a[i]>='0' && a[i]<='9')
            {
                int sum=0;
                int c[3]={1,0,0};;
                while(a[i]>='0' && a[i]<='9')
                {
                    sum+=a[i]-'0';
                    if(sum>=3) sum=m[sum];
                    value+=c[sum]; c[sum]++;
                    i++;
                }
                i--;
            }
            i++;
        }
        cout<<value<<endl;
    }
}
