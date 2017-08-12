#include<stdio.h>
const int N=1234;
int a[N];
int main(){
    int t,count=0;
    scanf("%d",&t);
    for(int i=0;i<t;i++)scanf("%d",&a[i]);
    for(int i=0;i<t-1;i++){
        int mn=i;
        for(int j=i+1;j<t;j++){
            if(a[mn]>a[j])
                mn=j;
        }
        if(mn!=i){
            int tmp=a[mn];
            a[mn]=a[i];
            a[i]=tmp;
        }
    }
    for(int i=0;i<t;i++)printf("%d ",a[i]);
}
