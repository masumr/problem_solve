#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<int>a;
int bs(int Q, int n) {
    int lo=0, hi=n-1;
    int best_so_far=-1;
    while(lo<=hi) {
        int mid = (hi+lo)/2;
        if (a[mid]<=Q) {
            if(a[mid]==Q)
                best_so_far=mid;
            lo=mid+1;
        } else hi=mid-1;
    }
    return best_so_far;
}

int main()
{
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int as;
        cin>>as;
        a.push_back(as);
    }
    int x;
    int f;
    cin>>x;
    vector<int>s,d;
    map<int,int>mp;
    for(int i=0;i<x;i++)
    {
        int y;
        cin>>y;
        a.push_back(y);
        s.push_back(y);
        d.push_back(y);
    }
    sort(a.begin(),a.end());
    sort(s.begin(),s.end());
    for(int i=0;i<s.size();i++)
    {
        int f=bs(s[i],a.size());
        mp[s[i]]=f-i;
    }
    for(int i=0;i<d.size();i++)
        cout<<mp[d[i]]<<endl;

}
