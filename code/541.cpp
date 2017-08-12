#include<cstdio>
#include<string.h>
using namespace std;
int main(){
    int n,bit[100][100];
    while (scanf("%d",&n)==1 and n!=0){
        int a,r,c,cntr,cntc;
        int row[n],col[n];
        memset(row,0,sizeof(row));
        memset(col,0,sizeof(col));
        for (int i=0;i<n;i++)
        {
            for (int j=0;j<n;j++)
            {
                scanf("%d",&a);
                bit[i][j]=a;
                row[i]+=a;
                col[j]+=a;
            }
        }
        cntr=0;
        cntc=0;
        for (int i=0;i<n;i++){
            if (row[i]%2){
                cntr++;
                r=i;
            }
            if (col[i]%2){
                cntc++;
                c=i;
            }
        }
        if (cntr==0 && cntc==0) printf("OK\n");
        else if (cntr==1 && cntc==1) printf("Change bit (%d,%d)\n",r+1,c+1);
        else printf("Corrupt\n");
    }
}
