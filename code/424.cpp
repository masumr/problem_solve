#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int b[200]={0};
    int k;
    int temp=0;
    int max=0;
    while(cin>>a)
    {
        if(atoll(a.c_str())==0)
            break;
        int x=a.size();
        k=0;
        int sum,m;
        for(int i=x-1;i>=0;i--)
        {
            b[k]+=((int)a[i]-48)+temp;
            b[k]%=10;
            temp=b[k]/10;
            k++;
        }
        if(max<k)
            max=k;
        if(temp!=0)
            b[k+1]+=temp;
    }

    for(int s=max-1;s>=0;s--)
        cout<<b[s];
    cout<<endl;
}
