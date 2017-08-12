#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c)
{
    if (c==65 || c==69 || c==73 || c==79 || c==85 || c==97 || c==101 || c==105 || c==111 || c==117)
    return true;
    return false;
}


int main()
{
    char c,cons;

    while(c=getchar())

    {
        if(c==EOF)
            return 0;

        if(isVowel(c))
        {
            while(isalpha (c))
            {
                cout<<c;
                c=getchar();
            }
            cout<<"ay";
        }

        else if(isalpha(c))
        {
            cons=c;
            c=getchar();
            while(isalpha (c))
            {
                cout<<c;
                c=getchar();
            }
            cout<<cons<<"ay";
        }

        cout<<c;
    }
return 0;
}
