#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    char c;
    int b;
    while(cin>>b)
    {
        if(b==0)
            return 0;
        char a[b+10];
        int m=b;
        cin>>a;
        int count=0;
        int j=0;
        while(a[j]!='R' && a[j]!='D'){
            if(a[j]=='Z'){
                m=0;
                break;
            }
            j++;
        }
        c=a[j];
        for(int i=j+1;i<b;i++)
        {
            if(m==0)
                break;
           else if(a[i]=='R'){
                count++;
                if(c!='R'){
                    if(m>count)
                        m=count;
                }
                count=0;
                 c='R';
            }
            else if(a[i]=='D'){
                count++;
               if(c!='D'){
                if(m>count)
                    m=count;
               }
                count=0;
                 c='D';
            }
            else if(a[i]=='Z'){
                count=0;
                m=count;
            }
            else if(a[i]=='.')
                count++;
        }
        cout<<m<<endl;
    }
}
