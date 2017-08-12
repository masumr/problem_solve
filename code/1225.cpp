#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int n;
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n;
        a="";
        for(int i=1;i<=n;i++)
        {
            stringstream ss;
            ss<<i;
            ss>>b;
            a+=b;
            ss.clear();
        }
        sort(a.begin(),a.end());
        string ch="0123456789";
        int ans=0;
        int k=0;
        for(int i=0;i<ch.size();i++)
        {
            int count=0;
            while(a[k]==ch[i])
            {
                count++;
                k++;
            }
            cout<<count;
            ans+=count;
            if(i<ch.size()-1)
                cout<<' ';
        }
        cout<<endl;
    }
}
