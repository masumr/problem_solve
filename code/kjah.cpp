#include<bits/stdc++.h>
using namespace std;
int main()
{
    int graph[100][100];
    int nodes,edge;
    cin>>nodes>>edge;
    for(int i=0;i<edge;i++)
    {
        int n1,n2,cost;
        cin>>n1>>n2>>cost;
        graph[n1][n2]=cost;
        graph[n2][n1]=cost;

    }
}
