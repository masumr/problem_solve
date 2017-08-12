#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n, i, a, b;
    char c[110], ch[110], s[110], sh[110];
    cin>>n;
    for(i = 1; i <= n; i++)
    {
        cin>>c>>ch>>s>>sh;
        cin>>a>>b;
        if(strcmp(ch,"PAR")==0){
            if((a+b)%2 == 0)
                printf("%s\n", c);
            else
                printf("%s\n", s);
        }
        else
        {
            if((a+b)%2 == 0)
                printf("%s\n", s);
            else
                printf("%s\n", c);
        }
    }
    return 0;
}
