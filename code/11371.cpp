#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll num1,num2,num,sum;
    string a,b;
    while(cin>>a)
    {
        sort(a.begin(),a.end());
        b=a;
        if(b[0]=='0')
        {
            for(int i=1;i<a.size();i++)
            {
                if(b[i]!='0')
                {
                    swap(b[0],b[i]);
                    break;
                }
            }
        }
        reverse(a.begin(),a.end());
        num1=atoll(a.c_str());
        num2=atoll(b.c_str());
        cout<<num2<<endl;
        if(num1<num2)
            swap(num1,num2);
        num=num1-num2;
        sum=num/9;
        cout<<num1<<" - "<<num2<<" = "<<num<<" = 9* "<<sum<<endl;
    }
}
