#include<cstdio>
#include<string.h>
#include<bitset>
#include<iostream>
#include<map>
using namespace std;

const int size=2003;
bitset<size>p;
void sieve(){
    p[0]=1;p[1]=1;
    for(int i=4;i<=size;i+=2)p[i]=1;
    for(int i=3;i*i<=size;i+=2)if(!p[i])for(int j=i*i;j<=size;j+=(i<<1))p[j]=1;
}
char a[size];
int main(){
    sieve();
    int t,c=0;
    map<char,int>mp;
    scanf("%d",&t);
    while(t--){
        scanf("%s",a);
        int len=strlen(a);
        for(int i=0;i<len;i++)mp[a[i]]++;
        int k=0;
        printf("Case %d: ",++c);
        for(char i='0';i<='9';i++)if(p[mp[i]]==0){printf("%c",i);k++;}
        for(char i='A';i<='Z';i++)if(p[mp[i]]==0){printf("%c",i);k++;}
        for(char i='a';i<='z';i++)if(p[mp[i]]==0){printf("%c",i);k++;}
        if(k==0)printf("empty");
        printf("\n");
        mp.clear();
    }
}
