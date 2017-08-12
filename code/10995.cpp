#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>s;
    queue<int>q;
    priority_queue<int>pq;
    int n;
    while(scanf("%d",&n)){
        while(n--){
            int x,y;
            scanf("%d %d",&x,&y);
            if(x==1){
                s.push(y);
                q.push(y);
                pq.push(y);
            }
            else{
                if(s.top()==y) s.pop();
                if(q.front()==y) q.pop();
                if(pq.top()==y) pq.pop();
            }
        }
        int s1=s.size(),q1=q.size(),pq1=pq.size();
        if(s1==0 and q1!=0 and pq1!=0) cout<<"stack"<<endl;
        else if(q1==0 and s1!=0 and pq1!=0) cout<<"queue"<<endl;
        else if(pq1==0 and s1!=0 and q1!=0) cout<<"priority queue"<<endl;
        else if(s1!=0 and q1!=0 and pq1!=0) cout<<"impossible"<<endl;
        else cout<<"not sure"<<endl;
        while(s.size()!=0 or q.size()!=0 or pq.size()!=0){
            s.pop();
            q.pop();
            pq.pop();
        }
    }
}
