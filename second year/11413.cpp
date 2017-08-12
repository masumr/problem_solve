#include<cstdio>
using namespace std;

int N,M;
int n[1000001];

int main()
{
    while (scanf("%d%d",&N,&M)!=EOF){
        int left=0,right=0,mid;
        for (int i=0; i<N; i++) {
            scanf("%d",&n[i]);
            if (n[i]>left) left = n[i];
            right += n[i];
        }

        while (left < right){
            mid = (left+right)/2;
            int sum=0;
            int amount=0;
            for (int i=0; i<N; i++){
                sum += n[i];
                if (sum > mid) {
                    amount++;
                    sum = n[i];
                }
                else if (sum == mid){
                    amount++;
                    sum = 0;
                }
            }
            if (sum>0) amount++;

            if (amount > M) left = mid+1;
            else right = mid;
        }
        printf("%d\n",left);
    }
    return 0;
}
