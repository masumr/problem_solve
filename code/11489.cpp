#include<bits/stdc++.h>
using namespace std;
int main (){
    int t, len,ca=0 ;
    scanf("d",&t);
    char a[10005];
    while (t--)
    {
        scanf("%s",a);
        len = strlen (a);
        int c[ 3 ] = { 0, 0, 0 };
        for ( int i = 0 ; i <len; i ++ ){
            int tP=a[i]-' 0 ';
            c[tP%3]++ ;
        }
        printf("Case %d: ",++ca);
        int m= (c[1] + c[2] *2 )%3 ;
        if(m){
            if (c[m]> 0 ){
                if (c[ 0 ] & 1 )  printf ("T\n " );
                else printf ("S\n " );
            }
             else
            {
                printf("T\n ");
            }
        }
         else
        {
            if (c[0]&1)  printf("S\n " );
             else  printf("T\n " );
        }
    }
}
