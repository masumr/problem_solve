#include<cstdio>
#include<algorithm>
#include<climits>
int a[20003];
int main(){
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        n--;
        for(int i=1;i<=n;i++)scanf("%d",&a[i]);
        int sum=0,ci=1;
        int mn=INT_MIN;
        int me,mi;
        for(int i=1;i<=n;i++){
            sum+=a[i];
            if(sum<0){
                ci=i+1;
                sum=0;
            }
            if((mn<sum)||(sum==mn && (me-mi<i-ci))){
                mn=sum;
                me=i;
                mi=ci;
            }
        }
        if(mn>0)printf("The nicest part of route %d is between stops %d and %d\n",++c,mi,me+1);
        else printf("Route %d has no nice parts\n",++c);
    }
}
