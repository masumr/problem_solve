#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
vector<ll>convert(string a)
{
    stringstream ss(a);
    vector<ll>v;
    ll num;
    while(ss>>num)v.push_back(num);
    return v;
}
int main()
{
    string a;
    int i;
    while(1)
    {
        getline(cin,a);
        vector<ll>v=convert(a);
        int count=0;
        int y=v.size()-1;
        for(int i=0; i<v.size(); i++)
        {
            if(v[i]==0)
            {
                count++;
            }
            else break;
        }
        if(count==v.size()){cout<<0;}
        else
        {
            ll x=v[count];
            if(x!=1 && x!=-1){
                if(x<0) x=-x;
                cout<<x;
            }
            int y=v.size()-count;
            cout<<"x^"<<y;
            count++;
            y--;
            for(i=count;i<v.size()-1;i++){
                if(v[i]!=0){
                    x=v[i];
                    cout<<" + ";
                    if(x!=-1 && x!=1)
                        cout<<x;
                    cout<<"x^"<<y;
                }
                y--;
            }
            if(v[i]!=0) cout<<" + "<<v[i];


        }
        cout<<endl;
        v.clear();
    }
}
