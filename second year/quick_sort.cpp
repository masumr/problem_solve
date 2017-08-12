#include<stdio.h>
const int N=1000;
int a[N];
void quick_sort(int a[],int left,int right){
    int i=left,j=right;
    int pivot=a[(left+right)/2];
    while(i<=right && j>=left){
        while(a[i]<pivot)i++;
        while(a[j]>pivot)j--;
        if(i<=j){
            swap(a[i],a[j]);
            i++;j--;
        }
        else{
            if(left<j) quick_sort(a,left,j);
            if(i<right) quick_sort(a,i,right);
            return;
        }
    }
}
int main(){
   int n;
   scanf("%d",&n);
   for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    quick_sort(a,0,n-1);
    for(int j=0;j<n;j++)
        printf("%d\t",a[j]);
}
