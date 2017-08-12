#include<bits/stdc++.h>
using namespace std;
char a[11][11];
int dx[]= {1,-1,0,0};
int dy[]= {0,0,-1,1};
int main()
{
    int t,ca=0;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        for(int i=0; i<n; i++)for(int j=0; j<n; j++)cin>>a[i][j];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(a[i][j]=='.')
                {
                    map<char,int>mp;
                    string ss="";
                    for(int c=0; c<4; c++)
                    {
                        int tx=i+dx[c];
                        int ty=j+dy[c];
                        if((tx>=0 && tx<n) &&(tx>=0 && tx<n)&&(a[tx][ty]!='.'))
                        {
                            mp[a[tx][ty]]=1;
                            //cout<<a[tx][ty]<<' ';
                        }
                    }
                    for(char k='A';k<='Z';k++){
                        //cout<<mp[k]<<' '<<k<<endl;
                        if(mp[k]==0){
                            a[i][j]=k;
                            break;
                        }
                    }
                    mp.clear();
                }
            }
        }
        printf("Case %d:\n",++ca);
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)cout<<a[i][j];
            cout<<endl;
        }
    }
}
