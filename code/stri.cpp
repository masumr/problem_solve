#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack<int>a;
    a.push(10);
    a.push(3);
    a.push(2);
    while(!a.empty()){
        cout<<a.top()<<"\t";
        a.pop();
    }
    a.pop();
    while(!a.empty()){
        cout<<a.top()<<"\t";
        a.pop();
    }
    a.pop();
    a.pop();
}
