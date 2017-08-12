#include<bits/stdc++.h>
using namespace std;
int main()
{
    char a[100];
    int i=1;
    while(cin>>a)
    {
        if(a[0]=='*')
            break;
        printf("Case %d: ",i);
        if(strcmp("Hajj",a)==0)
            cout<<"Hajj-e-Akbar"<<endl;
        else
            cout<<"Hajj-e-Asghar"<<endl;
        i++;
    }
}
