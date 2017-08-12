#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    string a,a1;
    int d,y,d1,y1;
    char e,e1;
    int t,c=0;
    scanf("%d",&t);
    while(t--){
        cin>>a>>d>>e>>y>>a1>>d1>>e1>>y1;
        if(a=="January" ||a=="February") y=y;
        else y++;
        if(a1=="January") y1--;
        if(a1=="February"){
            if(d1!=29) y1--;
        }
        y--;
        ll count=0;
        count+=(y1/4)-(y/4);
        count-=(y1/100)-(y/100);
        count+=(y1/400)-(y/400);
        printf("Case %d: %d\n",++c,count);
    }
}
