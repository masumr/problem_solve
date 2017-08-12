#include <iostream>
#include <climits>
#include <cstdio>
using namespace std;
int main()
{
    int N, curSum, curSI, curEI, MS, maxSI, maxEI, c1;
    int t,cs=1;
    int A[20005];
    scanf("%d", &t);
    int n;
    while(t--){
        scanf("%d", &N);
        N--;
        for(int i = 1; i <= N; i++)
            scanf("%d", &A[i]);

        curSum = 0;
        curSI = 1;
        MS = INT_MIN;
        for(curEI = 1; curEI <= N; curEI++){
            curSum += A[curEI];
            if(curSum < 0){
                curSI = curEI + 1;
                curSum = 0;
            }
            if(curSum > MS || (curSum == MS && (maxEI-maxSI < curEI- curSI))){
                MS = curSum;
                maxSI = curSI;
                maxEI = curEI;
            }
        }
        if(MS > 0)printf("The nicest part of route %d is between stops %d and %d\n", cs++, maxSI, maxEI+1);
        else printf("Route %d has no nice parts\n", cs++);
    }
    return 0;
}
