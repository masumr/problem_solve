#include<bits/stdc++.h>
using namespace std;
bool isVowel(char c){
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' || c=='y')return true;
    return false;
}
int main(){
    string line;
    int cnt1,cnt2,cnt3,i;
    while(getline(cin,line)){
        if(line=="e/o/i")   break;
        cnt1=cnt2=cnt3=0;
        if(isVowel(line[0]))
        cnt1++;
        for(i=1;;i++){
            if(line[i]=='/')    break;
            if(isVowel(line[i]) && !isVowel(line[i-1]))
            cnt1++;
        }
        if(isVowel(line[i+1]))
        cnt2++;
        for(i=i+2;;i++){
            if(line[i]=='/')    break;
            if(isVowel(line[i]) && !isVowel(line[i-1]))
            cnt2++;
        }
        if(isVowel(line[i+1]))
        cnt3++;
        for(i=i+2;i<line.length();i++){
            //if(line[i]=='/')    break;
            if(isVowel(line[i]) && !isVowel(line[i-1]))
            cnt3++;
        }
        //cout<<cnt1<<" "<<cnt2<<" "<<cnt3<<endl;
        if(cnt1!=5)printf("1\n");
        else if(cnt2!=7) printf("2\n");
        else if(cnt3!=5) printf("3\n");
        else printf("Y\n");
    }
}
