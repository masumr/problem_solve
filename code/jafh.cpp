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
    string a,b,c;
    while(cin>>a)
    {
        if(atol(a.c_str())==0)
            break;
        int count=0;
        b=a;
        sort(a.begin(),a.end());
        b=a;
        reverse(a.begin(),a.end());
        int sum;
        sum=atol(a.c_str())-atol(b.c_str());
        c=number_to_string(sum);

        while(c!=b)
        {
            b=c;
            a=c;
            reverse(a.begin(),a.end());
            sum=atol(a.c_str())-atol(b.c_str());
            c=number_to_string(sum);
            count++;
        }
        cout<<count+1<<endl;
    }
}
