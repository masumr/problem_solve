#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        cin>>a;
        char ch[100];
        for(int i='A';i<='Z';i++)
        {
            ch[i]=(char)i;
        }
        int n;
        cin>>n;
        char c1,c2;
        for(int i=0;i<n;i++)
        {
            cin>>c1>>c2;
            for(int j='A';j<='Z';j++)
            {
                if(ch[j]==c2)
                    ch[j]=c1;
            }
        }
        for(int i=0;i<a.size();i++)
        {
            int count=0;
            for(int j='A';j<='Z';j++)
            {
                if(ch[a[i]]==ch[j]){
                    count++;
                    break;
                }
            }
            if(count==0) cout<<a[i];
            else cout<<ch[a[i]];
        }
        cout<<endl;
        a.clear();
    }
}
