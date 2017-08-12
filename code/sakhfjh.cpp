#include<bits/stdc++.h>
using namespace std;
vector< pair<string,int> >v;
int main()
{
    string a="mississippi";
    for(int i=0;i<a.size();i++)
    {
        v.push_back({a.substr(i),i});
    }
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++)
         cout<<v[i].second<<" "<<v[i].first<<endl;
          //cout<<v[i].second<<" "<<v[i].first<<endl;
}
