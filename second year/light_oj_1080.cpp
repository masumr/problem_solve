#include<bits/stdc++.h>
using namespace std;
const int N=123456;
struct{
    int sum,prop;
}T[N*4];
char s[N];
void lazy_update(int n,int b,int e,int i,int j,int nv){
    if(b>j || e<i)return;
    if(b>=i && j>=e ){
        T[n].sum+=(e-b+1)*nv;
        T[n].prop+=nv;
        return;
    }
    lazy_update(n*2,b,(b+e)/2,i,j,nv);
    lazy_update(n*2+1,(b+e)/2+1,e,i,j,nv);
    T[n].sum=T[n*2].sum+T[n*2+1].sum+(e-b+1)*T[n].prop;
}
int query(int n,int b,int e,int i,int j,int carry){
    if(i>e || j<b)return 0;
    if(b>=i && j>=e)return T[n].sum+carry;
    return query(n*2,b,(b+e)/2,i,j,carry+T[n].prop)+query(n*2+1,(b+e)/2+1,e,i,j,carry+T[n].prop);
}
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        scanf("%s",s);
        int n;
        int len=strlen(s);
        for(int i=0;i<=4*len;i++){
            T[i].sum=0;
            T[i].prop=0;
        }
        scanf("%d",&n);
        printf("Case %d:\n",++c);
        getchar();
        while(n--){
            //cout<<n<<endl;
            char ch;
            scanf("%c",&ch);
            //getchar();
            //cout<<ch<<endl;
            if(ch=='I')
            {
                //cout<<ch<<endl;
                int x,y;
                scanf("%d%d",&x,&y);
                lazy_update(1,1,len,x,y,1);
            }
            else{
                int x;
                scanf("%d",&x);
                int sum=query(1,1,len,x,x,0);
                char cc=s[x-1];
                //cout<<sum<<' '<<cc<<endl;
                if(sum%2){
                    if(cc=='1')printf("0\n");
                    else printf("1\n");
                }
                else printf("%c\n",cc);
            }
            getchar();
        }
    }
}
