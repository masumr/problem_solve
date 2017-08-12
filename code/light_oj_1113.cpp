#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        stack<string>F,B;
        string str="http://www.lightoj.com/",command;
        printf("Case %d:\n",i);
        while(cin>>command&&command!="QUIT")
        {
            if(command=="BACK")
            {
                if(B.empty())
                    printf("Ignored\n");
                else
                {
                    F.push(str);
                    str=B.top();
                    B.pop();
                    cout<<str<<endl;
                }
            }
            else if(command=="FORWARD")
            {
                if(F.empty())
                    printf("Ignored\n");
                else
                {
                    B.push(str);
                    str=F.top();
                    F.pop();
                    cout<<str<<endl;
                }
            }
            else
            {
                B.push(str);
                cin>>str;
                cout<<str<<endl;
                while(F.size())
                    F.pop();
            }
        }
    }
    return 0;
}
