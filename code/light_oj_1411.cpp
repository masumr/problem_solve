#include<bits/stdc++.h>
using namespace std;
long long data[2500010];
#define si(a) scanf("%d",&a)
#define sii(a,b) scanf("%d%d",&a,&b)
void A( int st, int nd ) {
    for( int i = st; i <= nd; i++ ) data[i] = data[i] + (i - st + 1);
}
void B( int st, int nd ) {
    for( int i = st; i <= nd; i++ ) data[i] = data[i] + (nd - i + 1);
}
void C( int st, int nd, int x ) {
    for( int i = st; i <= nd; i++ ) data[i] = x;
}
long long S( int st, int nd ) {
    long long res = 0;
    for( int i = st; i <= nd; i++ ) res += data[i];
    return res;
}
int main(){
    char a;
    int st,nd,x,n;
    int t,c=0;
    si(t);
    while(t--){
        printf("Case %d:\n",++c);
        si(n);
        memset(data,0,sizeof data);
        while(n--){
            cin>>a;
            if(a=='A'){
                sii(st,nd);
                A(st,nd);
            }
            else if(a=='B'){
                sii(st,nd);
                B(st,nd);
            }
            else if(a=='C'){
                sii(st,nd);
                si(x);
                C(st,nd,x);
            }
            else{
                sii(st,nd);
                printf("%lld\n",S(st,nd));
            }
        }
    }
}
