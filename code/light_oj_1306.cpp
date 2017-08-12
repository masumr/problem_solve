#include<bits/stdc++.h>
using namespace std;
int x,y;
int eug(int a,int b,int &x,int &y){
    if(b==0){
        x=1;
        y=0;
        return a;
    }
    int x1,y1;
    int g=eug(b,a%b,x1,y1);
    x=y1;
    y= x1-(a/b)*y1;
    return g;
}
int main(){
    int t,cc=0;
    scanf("%d",&t);
    while(t--){
        int a,b,c,x1,x2,y1,y2;
        scanf("%d%d%d%d%d%d%d",&a,&b,&c,&x1,&x2,&y1,&y2);
        bool c1=0,c2=0;
        if(a<0){
            c1=1;
            a=abs(a);
        }
        if(b<0){
            c2=1;
            b=abs(b);
        }
        int g=eug(a,b,x,y);
        if(c%g)printf("Case %d: 0\n",++c);
        else{
            x*=(c/g);
            y*=(c/g);
            if(c1){
                x*=-1;
            }
            if(c2)y*=-1;
            a/=g,b/=g;
            int d1=abs(x1-x)%b;
            int d2=abs(y1-y)%a;
            if(x1<0)x1-=d1;
            else x1+=d1;
            if(y1<0)y1-=d2;
            else y1+=d2;
            int dif1=(x2-x1)+b;
            int dif2=(y2-y1)+a;
            cout<<d1<<' '<<d2<<' '<<dif1<<' '<<dif2<<endl;
            int mx=min(dif1/b,dif2/a);
            printf("Case %d: %d\n",++cc,mx);
        }
    }
}
