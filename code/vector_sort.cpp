#include<bits/stdc++.h>
using namespace std;
int main()
{
    int b;
    vector<int>a;
    int t;
    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>b;
        a.push_back(b);
    }
    for(int i=0;i<a.size();i++)
    {
        int min=i;
        for(int j=i+1;j<a.size();j++)
            {
                if(a[j]>a[min])
                    min=j;
            }
            if(i!=min)
                swap(a[i],a[min]);
    }
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<"\t";
}
