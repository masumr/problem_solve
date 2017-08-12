#include<cstdio>
//using namespace std;
typedef double dl;
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int r;
        scanf("%d",&r);
        dl l,w;
        l=r*5;
        w=3*r;
        dl yy=l*.45,xx=l*.55;
        printf("Case %d:\n",++c);
        printf("%.0lf %.0lf\n",-yy,w/2);
        printf("%.0lf %.0lf\n",xx,w/2);
        printf("%.0lf %.0lf\n",xx,-w/2);
        printf("%.0lf %.0lf\n",-yy,-w/2);
    }
}
