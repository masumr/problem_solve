#include<bits/stdc++.h>

using namespace std;
set<char>s;
vector<int>v;
int main()
{
    int n,m;
    vector<string>vecs;
    scanf("%d%d",&n,&m);
    for(int i=0; i<n; i++)
    {
        string a;
        cin>>a;
        vecs.push_back(a);

    }
    vector<int>ch;
    bool sig=false;
    int aa;
    int test[102];
    memset(test,0,sizeof(test));
    int cc=0,ccc=0;
    map<char,int>mp;
    for(int i=0; i<m; i++)
    {
        int d;
        scanf("%d",&d);
        if(d==i+1)ccc++;
        if(i==0)aa=vecs[d-1].size();
        int count=0;
        for(int i=0; i<aa; i++)
        {
            if(vecs[d-1][0]==vecs[d-1][i])count++;
            s.insert(vecs[d-1][i]);

        }
        v.push_back(d-1);
        //cout<<aa<<' '<<count<<endl;
        if(count==aa && s.size()==i+1)cc++;
        if(vecs[d-1].size()!=aa)
            sig=true;
        ch.push_back(d);
        test[d]=1;

    }
    if(sig==false)
    {

        string ans;

        for(int i=0; i<aa; i++)
        {
            bool si=true;
            for(int j=0; j<ch.size(); j++)
            {
                if(vecs[ch[j]-1][i]!=vecs[ch[0]-1][i])si=false;
                //cout<<vecs[ch[0]-1][i]<<' '<<vecs[ch[j]-1][i]<<endl;

            }
            if(si==false)ans+='?';
            else ans+=vecs[ch[0]-1][i];



        }
        bool si=false;
        for(int i=0; i<ans.size(); i++)
        {
            if(ans[i]!='?')si=true;
        }
        if(si==true)
        {
            int count=0;
            for(int i=1; i<=n; i++)
            {
                bool tt=true;
                if(test[i]==0&&ans.size()==vecs[i-1].size())
                {
                    for(int j=0; j<ans.size(); j++)
                        if(ans[j]!=vecs[i-1][j]&&ans[j]!='?')tt=false;
                    if(tt==false)++count;


                }
                else if(test[i]==0)++count;



            }
//cout<<count<<endl;
            if((n-m)==count)
            {
                cout<<"Yes"<<endl;
                cout<<ans<<endl;

            }
            else
                cout<<"No"<<endl;

        }

        else
        {
            sort(v.begin(),v.end());
            int ca=0,cs=0;
            int k=0;
            for(int i=0;i<n;i++){
                if(aa==vecs[i].size()){
                    ca++;
                    if(i==v[cs])cs++;
                }
            }
            //cout<<cs<<' '<<ca<<endl;
            if(aa==1)
            {
                cout<<"Yes"<<endl<<'?'<<endl;
                return 0;
            }
            else if(cc==m &&ca==cs)
            {
                cout<<"Yes"<<endl;
                for(int i=0; i<aa; i++)cout<<'?';
                cout<<endl;
                return 0;
            }

            cout<<"No"<<endl;
        }

    }
    else cout<<"No"<<endl;

    return 0;


}
