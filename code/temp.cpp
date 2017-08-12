#include<bits/stdc++.h>
using namespace std;
template<typename T>
string num_to_con_string(T number)
{
    ostringstream ss;
    ss<<number;
    return ss.str();
}
int main()
{
    int num;
    cin>>num;
    cout<<num_to_con_string(num)<<endl;
    return 0;
}
