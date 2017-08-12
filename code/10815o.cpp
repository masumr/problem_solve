#include<bits/stdc++.h>
using namespace std;
set<string>v;
int main()
{
    string s;
    while(cin>>s)
    {
        int i=0;
        while(i<s.size())
        {
            string tmp="";
                while((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
                {
                    tmp+=tolower(s[i]);
                    i++;
                }
            if(tmp.size())
            v.insert(tmp);
            i++;
        }

        // cout<< <<"\n";
    }
    for(set<string>::iterator it=v.begin(); it!=v.end(); it++) cout<<*it<<endl;
}
