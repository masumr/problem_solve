#include<bits/stdc++.h>
using namespace std;
template<typename T>
string number_to_string(T number)
{
    ostringstream ss;
    ss<<number;
    return ss.str();
}
int main()
{
    int a=10;
    string b=number_to_string(a);
    int x=b.size();
    cout<<x<<endl;
}

