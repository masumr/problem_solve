#include<bits/stdc++.h>
using namespace std;
int main()
{
  char str[10];
  printf("\n Enter the string: ");
  cin>>str;
  for(int i=0;i<strlen(str)-1;i++)
  {
    for(int j=i;j<=i+1;j++)
      printf("%c",str[j]);
    printf("\t");
  }
  return 0;
}
