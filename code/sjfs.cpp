#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        double c;
        int count=0;
        cin>>c;
        if(c>=10){
            while(c>=10){
                c/=10;
                count++;
            }
            printf("%.2fE+%02d\n",c,count);
        }
        else if(c<10.0 && c>=1.0) printf("%.2fE+00\n",c);
        else if(c<1.0 && c>0.0){
            while(c<1)
            {
                c*=10;
                count++;
                if(c==1.0) break;
            }
            printf("%.2lfE-%02d\n",c,count);
        }
    }
}

