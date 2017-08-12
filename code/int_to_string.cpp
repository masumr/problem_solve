#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*int to string*/
    stringstream ss;
    int a=1234;
    ss<<a;
    string s1;
    ss>>s1;
    cout<<s1<<endl;
    /*string to int*/
    ss.clear();
    string s2="1234";
    ss<<s2;
    int b;
    ss>>b;
    cout<<b*10<<endl;
    /*string to char*/

}
