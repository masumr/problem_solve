#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,a;
    while(cin>>n and n!=0){
        priority_queue<int>pq;
        int sum=0,i,c=0;
        for (i=0;i<n;i++){
            scanf("%d",&a);
            pq.push(-a);
        }
        for(i=0;i<n-1;i++){
            int d=-pq.top();
            pq.pop();
            int b=-pq.top();
            pq.pop();
            c=d+b;
            sum+=c;
            pq.push(-c);
        }
        cout<<sum<<endl;
    }
}
