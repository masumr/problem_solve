#include<bits/stdc++.h>
using namespace std;
template<class T>
T min(T& a,T& b)
{
    return ((a<b)? a:b);
}
int main()
{
    float a1=2.9;
    float a2=3;
    int a3=5;
    int a4=6;
    cout<<min(a3,a4)<<endl;
    float min_value=min(a1,a2);
    cout<<min_value<<endl;
}
