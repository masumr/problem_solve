#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,i,e=1;
    while(cin>>a>>b)
    {
        if(a==0 && b==0)
            break;
        else
        {
            printf("Case %d: ",e++);
            c=((a-1)/b);
           if(c<=26)
                cout<<c<<endl;
            else
                cout<<"impossible"<<endl;
        }
    }
    return 0;
}
