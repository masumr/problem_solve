#include<bits/stdc++.h>
using namespace std;
typedef double ll;
int main(){
    int n;
    while(scanf("%d",&n) &&n){
        n = (n-1960)/10+2;
        ll len=1<<n;
        cout<<len<<endl;
        int i=1;
        while(len>0){
            len-=log10(i)/log10(2);
            i++;
        }
        printf("%d\n",i-2);
    }
}
