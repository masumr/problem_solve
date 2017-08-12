#include<cstdio>
#include<string.h>
using namespace std;

char A[10],B[10],C[10];

int one (){
    int la=strlen(A);
    int lb=strlen(B);
    int lc=strlen(C);
    for (int i=0;i<la;i++) if (A[i]!='1') return 0;
    for (int i=0;i<lb;i++) if (B[i]!='1') return 0;
    for (int i=0;i<lc;i++) if (C[i]!='1') return 0;
    if (la+lb!=lc) return 0;
    return 1;
}
int lowestbase (){
    int base=0;
    int la=strlen(A);
    int lb=strlen(B);
    int lc=strlen(C);
    for (int i=0;i<la;i++) if (base<A[i]-'0') base=A[i]-'0';
    for (int i=0;i<lb;i++) if (base<B[i]-'0') base=B[i]-'0';
    for (int i=0;i<lc;i++) if (base<C[i]-'0') base=C[i]-'0';
    return base;
}
long long int convert(char s[],int base){
    long long int n=0;
    for (int i=0;s[i];i++)
    n=s[i]-'0'+n*base;
    return n;
}

int main(){
    int t;
    scanf("%d",&t);
    while (t--){
        scanf("%s + %s = %s",A,B,C);
        long long int a,b,c;
        if (one()){
            printf("1\n");
            continue;
        }
        int base=lowestbase();
        if (base) base++;
        else{
            printf("2\n");
            continue;
        }
        int i;
        for (i=base;i<19;i++){
            a=convert(A,i);
            b=convert(B,i);
            c=convert(C,i);
            if (a+b==c){
                printf("%d\n",i);
                i=111;
            }
        }
        if (i==19) printf("0\n");
    }
}
