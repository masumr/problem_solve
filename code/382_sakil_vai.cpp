#include<iostream>
#include<bits/stdc++.h>
#define MAX 105
using namespace std;

int main()
{
    int n, i,c=0, sum, value[MAX];
    while(cin>>value[c++])
    if(value[c-1]==0) break;
    printf("PERFECTION OUTPUT\n");
    for(int j=0; j<c; j++) {
    if(value[j]==0) printf("END OF OUTPUT\n");
    else {
    for(i=2, sum=1; i*i<=value[j]; i++) {
    if(i*i==value[j])
    sum=sum+i;
    else if(value[j]%i==0)
    sum=sum+i+value[j]/i;
    }
    if(sum==value[j])
    printf("%5d PERFECT\n", value[j]);
    else if(sum>value[j])
    printf("%5d ABUNDANT\n", value[j]);
    else
    printf("%5d DEFICIENT\n", value[j]);
    }
    }
    return 0;
    }

