#include<stdio.h>
using namespace std;
int main(){
    char ch,c1;
    ch=getchar(c1);
    if(ch>='a'&& ch<='z')c1=ch-32;
    else c1=ch+32;
    putchar(c1);
}
