#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int b;
    while(cin>>a)
    {
        if(a>='0' && a<='9')
        {
            b=(int)a-47;
            cout<<b<<endl;
        }
        else if(a>='A' && a<='Z'){
            b=((int)a-64)+10;
            cout<<b<<endl;
        }
        else if(a>='a' && a<='z'){
            b=((int)a-96)+36;
            cout<<b<<endl;
        }
        else{
            cout<<"such number is impossible"<<endl;
        }
    }
}
