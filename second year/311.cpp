#include<cstdio>

int main()
{
    int num[7];
    while(scanf("%d %d %d %d %d %d",&num[1],&num[2],&num[3],&num[4],&num[5],&num[6])){
        int i=1;
        for(;i<=6;i++)
            if(num[i]!=0) break;
        if(i==7) break;

        int box=num[6]+num[5]+num[4];
        num[1]-=11*num[5];
        num[2]-=5*num[4];

        box+=(num[3]/4); if(num[3]%4) box++;
        switch(num[3]%4){
        case 0: break;
        case 1:
            num[2]-=5;
            num[1]-=7;
            break;
        case 2:
            num[2]-=3;
            num[1]-=6;
            break;
        case 3:
            num[2]-=1;
            num[1]-=5;
            break;
        }

        if (num[2]>0){
            box+=num[2]/9; if(num[2]%9) box++;
            num[1]-=(36-(num[2]%9)*4);
        }
        else if (num[2]<0)
            num[1]-=(-num[2])*4;
        if (num[1]>0){
             box+=(num[1]/36); if(num[1]%36) box++;
        }
        printf("%d\n",box);
    }
    return 0;
}
