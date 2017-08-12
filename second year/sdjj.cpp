#include <bits/stdc++.h>
using namespace std;
#define UP 1
#define DOWN 2
#define LEFT 3
#define RIGHT 4
int a[30][30];
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int id = UP, n, p = 1 ;
        scanf("%d",&n);
        int r,c;
        int rr  = 0, cd = n-1, rl = n-1, cu = 0 ;
        memset(a,0,sizeof a);
        while(p != n*n+1)
        {
            if(id == UP)
            {

                r = rr++ ;

                for(c = 0 ; c < n ; c++)
                {
                    if(a[r][c] == 0)
                        a[r][c] = p++;

                }
                id = RIGHT ;
            }
            else if(id == RIGHT){
                c = cd-- ;
                for(r = 0 ; r < n ; r++){

                    if(a[r][c] == 0)
                        a[r][c] = p++;
                }
                id = DOWN ;
            }
            else if(id == DOWN){
                r = rl-- ;
                for(c = n-1 ; c >= 0 ; c--){
                    if(a[r][c] == 0)
                        a[r][c] = p++;

                }
                id = LEFT ;
            }
            else if(id == LEFT){
                c = cu++;
                for(r = n-1 ; r >= 0 ; r--){

                    if(a[r][c] == 0)
                        a[r][c] = p++;

                }
                id = UP ;
            }
        }
        for(r = 0 ; r < n ; r++){
            for(c = 0 ; c < n ; c++){
                printf("%4d",a[r][c]);
            }
            printf("\n");
        }
        printf("\n");
    }

}
