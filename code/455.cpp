#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    int j,i,t,n;
    cin>>t;
    while(t--)
    {
        cin>>a;
        int len=a.length();


        int count=0;
        for(i=1;i<=len;i++)
        {
            string concat="";
            string per=per.substr(0,i);
            int perlen=per.length();
            for(i=1;i<=len/perlen;i++)
            {
                concat=concat+per;
                if(concat==a){
                    cout<<perlen<<endl;
                    break;
                }
            }
        }
        if(t)cout<<endl;
    }
    return 0;
}
