#include<stdio.h>
 int main()
 {
     int m[34],n,i,r,lcm=1,multripication,k,temp;
     printf("how many numbers: ");
     scanf("%d",&n);
     printf("\nthe %d numbers are: ",n);
     for(i=1;i<=n;i++)
        scanf("%d",&m[i]);
    k=m[1];
    for(i=2;i<=n;i++){
        multripication=m[i]*k;
         while(m[i]!=0)
         {
            r=k%m[i];
            k=m[i];
            m[i]=r;
         }
        lcm=multripication/k;
        k=lcm;
    }
     printf("the least common mutripication is: %d\n",lcm);
}
