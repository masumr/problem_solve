#include<bits/stdc++.h>
using namespace std;
int main(){
int i, sum, t = 0,n;
    char ch[100];
    while(scanf("%s", ch) != EOF){
        sum=0;
        int l=strlen(ch);
        for(i = 0;i<l; i++){
            if(ch[i] >='A' && ch[i] <= 'Z')
                n=(int)ch[i]-38;
            else if(ch[i] >= 'a' && ch[i] <= 'z')
                n=(int)ch[i]-64;
            sum+=n;
        }
        for(i = 2; i <=sqrt(sum); i++){
            if(sum%i == 0){
                t = 1;
                break;
            }
        }
        if(t == 0 or sum==1)
            printf("It is a prime word.\n");
        else
            printf("It is not a prime word.\n");
    }
}
