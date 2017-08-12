#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    vector<string>vecs;
    scanf("%d%d",&n,&m);
    getchar();
    for(int i=0; i<n; i++)
    {
        string a;
        getline(cin,a);
        vecs.push_back(a);

    }
    vector<int>ch;
    bool sig=false;
    int aa;
    for(int i=0; i<m; i++)
    {
        int d;
        scanf("%d",&d);
        if(i==0)aa=vecs[d-1].size();
        if(vecs[d-1].size()!=aa)
            sig=true;
        ch.push_back(d);

    }

    if(sig==false)
    {
        string ans;
        if(aa==1){
            cout<<"Yes"<<endl<<'?'<<endl;
            return 0;
        }
        for(int i=0; i<aa; i++)
        {
            bool si=true;
            for(int j=0; j<ch.size(); j++)
            {
                if(vecs[ch[j]-1][i]!=vecs[ch[0]-1][i])
                    si=false;


            }
            if(si==false)ans+='?';
            else ans+=vecs[ch[0]-1][i];
        }
        int count=0;
        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]=='?')count++;
        }
        if(count==ans.size())cout<<"No"<<endl;
        else
        {
            cout<<"Yes"<<endl;
            cout<<ans<<endl;
        }
    }
    else cout<<"No"<<endl;
    return 0;


}
