#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int gcd(int a,int b){
    return (b==0)?a:gcd(b,a%b);
}
int main()
{
    char a[100000];
    int t;
    cin>>t;
    getchar();
    while(t--)
    {
        gets(a);
        stringstream ss(a);
        int num;
        while(ss>>num) v.push_back(num);
        int ans=0;
        for(int i=0;i<v.size();i++)
        {
            for(int j=0;j<v.size();j++)
            {
                if(v[j]!=v[i]){
                    int a1=gcd(v[i],v[j]);
                    ans=max(ans,a1);
                }
            }
        }
        cout<<ans<<endl;
        v.clear();
    }
}
