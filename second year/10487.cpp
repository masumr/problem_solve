#include<cstdio>
#include<algorithm>
const int size=10000007;
int a[size];
int binary_search(int lo,int hi,int n){
    if(lo>=hi)return lo;
    int mid=(lo+hi)/2;
    if(a[mid]>=n)return binary_search(lo,mid,n);
    else return binary_search(mid+1,hi,n);
}
int main(){
    int n,c=0;
    while(scanf("%d",&n) && n){
        int ss[n+5];
        for(int i=0;i<n;i++)scanf("%d",&ss[i]);
        int k=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)a[k++]=ss[i]+ss[j];
        }
        std::sort(a,a+k);
        int q;
        scanf("%d",&q);
        printf("Case %d:\n",++c);
        while(q--){
            int xx;
            scanf("%d",&xx);
            int ttt=binary_search(0,k-1,xx);
            int sum;
            //cout<<ttt<<endl;
            if(a[ttt]!=xx && ttt){
                int s1=a[ttt]-xx;
                ttt--;
                int s2=xx-a[ttt];
                sum=(s1<s2)?xx+s1:xx-s2;
            }
            else sum=a[ttt];
            printf("Closest sum to %d is %d.\n",xx,sum);
        }
    }
}

