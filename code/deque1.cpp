#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int>a;
    a.push_front(10);
    a.push_back(20);
    a.push_front(19);
    for(int i=0;i<a.size();i++)
        cout<<a[i]<<"\t";
}
