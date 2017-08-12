#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    while( scanf("%d",&n )&&n!=0){
        n--;
        for( m =1; m < n ; m++){
            int t =0;
            for(int i =1;i <= n;i++) t =(t + m)% i;
            if( t ==11)break;
        }
        printf("%d\n", m );
    }
}
