#include<bits/stdc++.h>
using namespace std;
int fib[]={
    1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,
987,1597,2584,4181,6765,10946,17711,28657,46368,75025,121393,
196418,317811,514229,832040,1346269,2178309,3524578,5702887,
9227465,14930352,24157817,39088169,63245986,102334155,
165580141,267914296,433494437,701408733,1134903170,1836311903
};
int binary_search(int lo,int hi,int n){
    if(lo>=hi) return lo;
    int mid=(lo+hi)/2;
    if(fib[mid]>=n)return binary_search(lo,mid,n);
    else return binary_search(mid+1,hi,n);
}
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        int pos=binary_search(0,44,n);
        while(fib[pos]>n) pos--;
        while(pos){
            if(n>=fib[pos])
            {
                putchar('1');
                n-=fib[pos];
            }
            else putchar('0');
            pos--;
        }
        printf("\n");
    }
}
