
#include<iostream>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<cmath>

#define MAXN 1000005
#define MAXP 100000


using namespace std;

bool flag[MAXN+2];
 int primes[MAXP+2];
 int arr[200];

struct ab
{
    int  val,ar;
};
ab res[200];

bool cmp(ab lhs,ab rhs)
{
    return lhs.val>rhs.val;
}

void seive()
{
     int i,j,k,l=1;

    for(i=0;i<=MAXN;i++)
    {
        flag[i]=1;
    }
    for(i=2;i<=sqrt(MAXN);i++)
    {
        if(flag[i]==1)
        {
            for(j=i;j*i<=MAXN;j++)
            {
                flag[i*j]=0;

            }
        }
    }


    for(k=2;k<=MAXN;k++)
    {
        if(flag[k]==1)
        {
            primes[l++] = k;
        }
    }

    //printf("%d\n",l);


}

int main()
{
    seive();
    int N,M,i,j,k,cas,l,p,d,n,t;
    scanf("%d",&cas);
    for(l=0;l<cas;l++)
    {

        memset(arr,0,sizeof(arr));


        scanf("%d%d",&N,&M);

        for(i=1; ;i++)
        {
            if(N<=primes[i])
            {
                k = i;
                break;
            }
        }

        p=0;

        for(j=k+1;primes[j]<=M;j++)
        {
            d = primes[j]-primes[j-1];

            arr[d]++;

            if(d>p)
            {
                p = d;
            }


        }

        t =0;

        for(int m =1;m<=p;m++)
        {
            res[t].val = arr[m];
            res[t].ar = m;
            t++;
        }




       sort(res,res+t,cmp);

       for(int n =0;n<t;n++){

       //printf("%d == %d\n",res[n].val,res[n].ar);
       }


        if(res[0].val==res[1].val)
        {
            printf("No jumping champion\n");
        }
        else
            printf("The jumping champion is %d\n",res[0].ar);


        //memset(res,0,sizeof(200));

        for(int z=0;z<=200;z++)
        {
            res[z].val = 0;
            res[z].ar = 0;
        }


    }
    return 0;



}

