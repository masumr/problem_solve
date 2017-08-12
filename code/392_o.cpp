#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    vector<ll>a;
    while(1)
    {
        ll x;
        for(int i=0; i<9; i++)
        {
            cin>>x;
            a.push_back(x);
        }
        int count=0;
        for(int i=0; i<9; i++)
        {
            if(a[i]==0)
                count++;
            else break;
        }
        int y=9-count-1;
        if(a[count]!=-1 && a[count]!=1)
            cout<<a[count];
        else {
            if(a[count]==-1)
                cout<<"-";
        }
        if(count!=9)
        {
            cout<<"x^"<<y;
            y--;
            for(int i=count+1; i<8; i++)
            {
                if(a[i]!=0)
                {
                    ll x=a[i];
                    if(x<0){
                        cout<<" - ";
                        x=-x;
                    }
                    else cout<<" + ";
                    if(a[i]!=-1 && a[i]!=1)
                        cout<<a[i];
                    if(y!=1)
                        cout<<"x^"<<y;
                    else cout<<"x";
                }
                y--;
            }
            if(a[8]!=0){
                ll x=a[8];
                 if(x<0){
                    cout<<" - ";
                    x=-x;
                 }
                    else cout<<" + ";
                cout<<x;
            }
        }
        cout<<endl;
        a.clear();
    }
}
