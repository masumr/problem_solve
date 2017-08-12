#include<bits/stdc++.h>
using namespace std;
void lcs(char a[],char b[],int l1,int l2){
    int l[l1+1][l2+1];
    for(int i=0;i<=l1;i++){
        for(int j=0;j<=l2;j++){
            if(i==0 || j==0)l[i][j]=0;
            else if(a[i-1]==b[j-1])l[i][j]=1+l[i-1][j-1];
            else l[i][j]=max(l[i][j-1],l[i-1][j]);
        }
    }
    int mx=l[l1][l2];
    if(mx==0)printf(":(\n");
    else{
        char lc[mx+1];
        lc[mx]='\0';
        int i=l1,j=l2;
        while(i>0 && j>0){
            if(a[i-1]==b[j-1]){
                lc[mx-1]=a[i-1];
                i--;j--;mx--;
            }
            else if(l[i-1][j]>l[i][j-1])i--;
            else j--;
        }
        printf("%s\n",lc);
    }
}
int main(){
    char a[101],b[101];
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        //if(t)printf("\n");
        scanf("%s%s",a,b);
        //cout<<a<<' '<<b<<endl;
        int l1=strlen(a);
        int l2=strlen(b);
        printf("Case %d: ",++c);
        lcs(a,b,l1,l2);
    }
}
