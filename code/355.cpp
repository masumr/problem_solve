#include<bits/stdc++.h>
using namespace std;
int main(){
    char s[10];
    int i,j,k,l,n,m,a,b,r,t,x,y,gf;
    while(scanf("%d %d",&a,&b)==2){
        scanf("%s",s);
        l=strlen(s);
       unsigned long long  int sum = 0;
        int flag =0;

        for(t=0;t<l;t++){
            if(s[t]>='A'&&s[t]<='F')
            gf = s[t]-55;
            else  gf = s[t]-'0';
            //printf("%d ",gf);
            if(gf>=a)
            flag =1;
        }
        if(flag ==1 )
        printf("%s is an illegal base %d number\n",s,a);

        else {

        vector <int > v;
        for(i=l-1;i>=0;i--)
        {
            r = s[i];
            if(r>=48&&r<=57)
            sum = sum + (r-48)*pow(a,l-i-1);
            else
            sum = sum + (r-55)*pow(a,l-i-1);
        }

        if(sum==0)
        printf("0 base %d = 0 base %d\n",a,b);

        else {
        while(sum)
        {
            //printf("hello");
            x = sum % b;
            if(x>=10&&x<=15)
            v.push_back(x+55);
            else v.push_back(x+48);
            sum = sum/b;
        }
        printf("%s base %d = ",s,a);
        for(t=v.size()-1;t>=0;t--)
        printf("%c",v[t]);
        printf(" base %d",b);
        printf("\n");}}
    }
    return 0;
}
