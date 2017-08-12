#include<cstdio>
#define G 34943
int main(){
    char num[1025];
    while (gets(num) && num[0] != '#'){
        if (!num[0])
            puts("00 00");
        else{
            int n= 0,i=0;
            while(num[i])n =((n<< 8) + num[i])%G;
            n=G-(((n<< 8)%G) << 8)%G;
            printf("%02X %02X\n",n>>8,n&255);
        }
    }
    return 0;
}
