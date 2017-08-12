#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c8,c7,c6,c5,c4,c3,c2,c1,c0;
    while(scanf("%d %d %d %d %d %d %d %d %d",
          &c8,&c7,&c6,&c5,&c4,&c3,&c2,&c1,&c0)==9){
              bool flag=false;
          if(c8!=0){
              if(c8<0){
                printf("-");
              }
              if((int)fabs(c8)!=1){
                printf("%d",(int)fabs(c8));
              }
            printf("x^8");
            flag=true;
          }
          if(c7!=0){
              if(flag){
                  if(c7<0){
                    printf(" - ");
                  }else{
                    printf(" + ");
                  }
              }else{
                  if(c7<0)
                    printf("-");
              }
              if((int)fabs(c7)!=1){
                printf("%d",(int)fabs(c7));
              }
            printf("x^7");
            flag=true;
          }
          if(c6!=0){
              if(flag){
                  if(c6<0){
                    printf(" - ");
                  }else{
                    printf(" + ");
                  }
              }else{
                  if(c6<0)
                    printf("-");
              }
              if((int)fabs(c6)!=1){
                printf("%d",(int)fabs(c6));
              }
            printf("x^6");
            flag=true;
          }
          if(c5!=0){
              if(flag){
                  if(c5<0){
                    printf(" - ");
                  }else{
                    printf(" + ");
                  }
              }else{
                  if(c5<0)
                    printf("-");
              }
              if((int)fabs(c5)!=1){
                printf("%d",(int)fabs(c5));
              }
            printf("x^5");
            flag=true;
          }
          if(c4!=0){
              if(flag){
                  if(c4<0){
                    printf(" - ");
                  }else{
                    printf(" + ");
                  }
              }else{
                  if(c4<0)
                    printf("-");
              }
              if((int)fabs(c4)!=1){
                printf("%d",(int)fabs(c4));
              }
            printf("x^4");
            flag=true;
          }
          if(c3!=0){
              if(flag){
                  if(c3<0){
                    printf(" - ");
                  }else{
                    printf(" + ");
                  }
              }else{
                  if(c3<0)
                    printf("-");
              }
              if((int)fabs(c3)!=1){
                printf("%d",(int)fabs(c3));
              }
            printf("x^3");
            flag=true;
          }
          if(c2!=0){
              if(flag){
                  if(c2<0){
                    printf(" - ");
                  }else{
                    printf(" + ");
                  }
              }else{
                  if(c2<0)
                    printf("-");
              }
              if((int)fabs(c2)!=1){
                printf("%d",(int)fabs(c2));
              }
            printf("x^2");
            flag=true;
          }
          if(c1!=0){
              if(flag){
                  if(c1<0){
                    printf(" - ");
                  }else{
                    printf(" + ");
                  }
              }else{
                  if(c1<0)
                    printf("-");
              }
              if((int)fabs(c1)!=1){
                printf("%d",(int)fabs(c1));
              }
            printf("x");
            flag=true;
          }
          if(c0!=0 || !flag){
              if(flag){
                  if(c0<0){
                    printf(" - ");
                  }else{
                    printf(" + ");
                  }
              }else{
                  if(c0<0)
                    printf("-");
              }
              printf("%d",(int)fabs(c0));
          }
          printf("\n");
          flag=true;
          }
    return 0;
}
