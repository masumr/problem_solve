#include<bits/stdc++.h>
using namespace std;
template<typename T>
inline T sqare(T a)
{
    return a*a;
}
string sq(string b)
{
    return b+b;
}
int main()
{
    int b=2;
    float c=2.3;
    string x="aa";
    cout<<sqare(b)<<" "<<sqare(c)<<"\t"<<sq(x)<<endl;
}
