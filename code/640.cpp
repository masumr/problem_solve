#include<stdio.h>
int main(){
    bool arr[1000*1000+1]={false};
    int sum = 0, num=0;
    for (int i = 1; i < 1000 * 1000+1; i++) {
            sum = i;
            num = i;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            if(sum<1000*1000+1)arr[sum]=true;
        }
     for (int i = 1; i < 1000 * 1000+1; i++) {
           if(arr[i]==false) printf("%d\n",i);
        }
}
