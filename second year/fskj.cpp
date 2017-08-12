#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        float c;
        cin>>c;
        int count=0;
        if(c>=10){
            while(c>10){
                c/=10;
                count++;
            }
            printf("%.2fE+%02d\n",c,count);
        }
        else if(c<10 && c>=1) printf("%.2fE+00\n",c);
        else if(c<1){
            while(c<10)
            {
                c*=10;
                count++;
            }
            printf("%.2lfE-%02d\n",c,count);
        }
    }
}
