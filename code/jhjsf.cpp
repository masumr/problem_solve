#include<>
int power(int number,int power)
{
    if(power==0)
        return 1;
    if(power==1)
        return number;
    int t=power(number,power/2);
    return (t*t*power(number,power%2))%1212342;
}
