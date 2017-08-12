#include<cstdio>
#include<queue>
using namespace std;
int main(){
    queue<int>q;
    int n;
    while(scanf("%d",&n) and n!=0){
        for(int i=1;i<=n;i++) q.push(i);
        printf("Discarded cards:");
        while(q.size()>1){
            printf(" %d",q.front());q.pop();
            int x=q.front();q.pop();
            if(!q.empty())printf(",");
            q.push(x);
        }
        //printf("1\n");
        printf("\nRemaining card: %d\n", q.front());
		q.pop();
    }
}
