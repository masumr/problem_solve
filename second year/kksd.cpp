#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int t;
    scanf("%d",&t);
    getchar();
    while(t--){
        string s1,s2,s3;
        int num;
        cin>>s1>>s2>>s3>>num;
        if(s2=="nobo" && s3=="borsho")printf("Shuva naya barsha %d\n",num+650);
        else printf("Shuvo nobo borsho %d\n",num-650);
    }
}
