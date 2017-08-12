#include<bits/stdc++.h>
using namespace std;
int a[209];
int main(){
    for(int i=1;i<205;i++)a[i]=i*i;
    int n;
    while(scanf("%d",&n) && n){
        bool ck=false;
        int x,y;
        if(n%2){
            for(int i=1;a[i]<=(4*n);i++){
                int sum=(4*n)-a[i];
                //cout<<sum<<' '<<a[i]<<endl;;
                if(sum%3==0){
                    sum/=3;
                    int s=sqrt(sum);
                    //cout<<sum<<' '<<s<<endl;
                    if(s*s==sum){
                        int s1=abs(i-s);
                        if(s1%2==0){
                            s1/=2;
                            y=min(s,s1);
                            x=max(s,s1);
                            if(x-y==1&&(x&&y)){
                                if(x*x*x-y*y*y==n){
                                printf("%d %d\n",x,y);
                                ck=true;
                                break;}
                            }
                        }
                    }
                }
            }
        }
        else{
            for(int i=1;a[i]<=(4*n);i++){
                int sum=(2*n)-a[i];
                //cout<<sum<<' '<<a[i]<<endl;;
                if(sum%3==0){
                    sum/=3;
                    int s=sqrt(sum);
                    //cout<<sum<<' '<<s<<endl;
                    if(s*s==sum){
                        int s1=abs(i-s);
                        if(s1%2==0){
                            s1/=2;
                            y=min(s,s1);
                            x=max(s,s1);
                            if(x-y==2&&(x&&y)){
                                if(x*x*x-y*y*y==n){
                                printf("%d %d\n",x,y);
                                ck=true;
                                break;}
                            }
                        }
                    }
                }
            }

        }
        if(!ck)printf("No solution\n");
    }
}
