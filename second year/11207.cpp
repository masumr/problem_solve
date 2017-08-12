#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
double value( int h, int w )  {
    if ( h < w ) swap( h, w );
    return max( w/2.0, min( h/4.0, w+0.0 ) );
}
int main(){
    int n;
    int h,w;
    while( ~scanf("%d",&n) && n ) {
        double mx=0,sum=0;
        for ( int i = 1;i<=n ;i++ ) {
            scanf("%d%d",&h,&w);
            if (mx < value( h, w )){
                mx = value( h, w );
                sum = i;
            }
        }
        printf("%.0lf\n",sum);
    }
}
