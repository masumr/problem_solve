#include<bits/stdc++.h>
using namespace std;
set<char>st,b;
set<char>::iterator it;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n+10];
        for(int i=0;i<n;i++){
            cin>>a[i];
            st.insert(a[i]);
        }
        int y=st.size();
        int low=0,hi=0;
        int ans=n+10;
        for(int i=0;i<n;i++)
        {
            if(b.size()==y) ans=min(ans,hi-low);
            if(b.size()<y){
                b.insert(a[hi]);
                hi++;
            }
            else
            {
                it=b.find(a[low]);
                b.erase(it);
                for(int j=low+1;j<n;j++)
                {
                    if(a[j]!=a[low])
                    {
                        low=j;
                    }
                }
            }
        }
        st.clear();
        //a.clear();
        b.clear();
        cout<<ans<<endl;
    }
}
