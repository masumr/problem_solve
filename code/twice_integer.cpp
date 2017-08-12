#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,t,n,j,k;
    vector<int>a;
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(i=0;i<n;i++){
            cin>>k;
            a.push_back(k);
        }
        sort(a.begin(),a.end());
        int count=0;
        for(i=0;i<a.size();i++)
        {
            int k=2*a[i];
            for(j=i+1;j<a.size();j++)
            {
                if(k==a[j]){
                    count++;
                    break;
                }
            }
        }
        cout<<count<<endl;
        a.clear();
    }
}
