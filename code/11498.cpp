#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x,x1,y1,y,t1,i;
    while(scanf("%d",&n)==1 and n!=0){
        scanf("%d%d",&x,&y);
        while(n--)
          {
              scanf("%d%d",&x1,&y1);
              if(x==x1 or y==y1)printf("divisa\n");
              else if(x1>x and y1>y)printf("NE\n");
              else if(x1<x and y1>y)printf("NO\n");
              else if(x1<x and y1<y)printf("SO\n");
              else if(x1>x and y1<y)printf("SE\n");
          }
      }
}
