#include<bits/stdc++.h>
using namespace std;
int find_soluation(char a[],int n){
    int table[n][n],l,h,gap;
    memset(table,0,sizeof table);
    for(gap=1;gap<n;gap++)for(l=0,h=gap;h<n;l++,h++){
        table[l][h]=(a[l]==a[h])?table[l+1][h-1]:(min(table[l][h-1],table[l+1][h])+1);
    }
    return table[0][n-1];
}
int main(){
   char a[100];
   while(scanf("%s",a)==1)
   cout<<find_soluation(a,strlen(a))<<endl;
}
