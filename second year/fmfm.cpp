#include<bits/stdc++.h>
using namespace std;
struct nd
{
    int a,b;
    char ch;
};
vector<int>v;
map<nd,int>mp;
int main()
{
    string s;
    int t,c=0;
    while(scanf("%d",&t)==1)S
    {
        for(int i=1; i<=t; i++)
        {
            cin>>s;
            printf("Instruction %d: ",++c);
            int l1=s[0]-'0';
            int l2=s[2]-'0';
            nd nn;
            nn.a=l1;
            nn.b=l2;
            nn.ch=s[1];
            if(mp[nn])printf("repeat step %d\n",mp[nn]);
            else
            {
                int ss;
                mp[nn]=i;
                if(s[1]=='+')
                {
                    printf("add %d to %d\n",l1,l2);
                    ss=l1+l2;
                }
                else if(s[1]=='-')
                {
                    printf("subtract %d from %d\n",l1,l2);
                    ss=l1-l2;
                }
                else if(s[1]=='/')
                {
                    printf("divide %d by %d\n",l1,l2);
                    ss=l1/l2;
                }
                else
                {
                    printf("multiply %d with %d\n",l1,l2);
                    ss=l1*l2;
                }
            }
        }
    }
}

