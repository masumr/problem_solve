#include<bits/stdc++.h>
using namespace std;
struct compare{
    bool operator()(const int& l,const int& r)
    {
        return l>r;
    }
};
int main()
{
    priority_queue<int,vector<int>,compare>pq;
    for(int i=3;i<=20;i+=3)
        pq.push(i);
    while(!pq.empty()){
        cout<<pq.top()<<endl;;
        pq.pop();
    }

}
