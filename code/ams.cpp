#include<stdio.h>
#include<math.h>
int main()
{
    int n, i = 0, array[10000], j, armstrong;
    scanf("%d", &n);
    int number = n;
    while(n!=0)
    {
        array[i] = n%10;
        n/=10;
        i++;
    }
    armstrong = 0;
    for(j = 0; j < i; j++)
    {
        armstrong+=(pow(array[j], i));
    }
    if(number == armstrong)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");
    return 0;
}
