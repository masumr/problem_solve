#include<bits/stdc++.h>
using namespace std;
int dec_to_con_oct(int n){
    int sum=1,s=0;
    while(n!=0){
        s+=(n%8)*sum;
        n/=8;
        sum*=10;
    }
    return s;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        if(i!=0) cout<<endl;
        int a,b,c,d;
        scanf("%d.%d.%d.%d",&a,&b,&c,&d);
        printf("%d.%d.%d.%d\n",dec_to_con_oct(a),dec_to_con_oct(b),dec_to_con_oct(c),dec_to_con_oct(d));
    }
}
