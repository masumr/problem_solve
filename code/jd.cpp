            ///*************************///
            /// SOFTERLAB PROBLEM SOLVE ///
            ///    ICE 18th BATCH       ///
            ///       15-16             ///
            ///    MASUM RANA           ///
            ///*************************///
///01.Write a program to find out largest number in an array
/*#include<stdio.h>
int main(){
    int array[100];
    int i,maximum_value=0;
    printf("Enter a the value of array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
        if(maximum_value<array[i])maximum_value=array[i];
    }
    printf("Maximum value is: %d\n",maximum_value);
    return 0;
}*/
///02.Write a program to find Smallest element from the array .
/*#include<stdio.h>
int main(){
    int array[100];
    int i,minimum_value=10000000;
    printf("Enter a the value of array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
        if(maximum_value>array[i])maximum_value=array[i];
    }
    printf("Minimum value is: %d\n",minimum_value);
    return 0;
}*/
///03.Write a program to reverse an array.
/*#include<stdio.h>
int main(){
    int array[100];
    int i,maximum_value=0;
    printf("Enter a the value of array: ");
    for(i=0;i<10;i++)
    {
        scanf("%d",&array[i]);
    }
    printf("Reverse the value is: ");
    for(i=9;i>=0;i--){
        printf("%d ",array[i]);
    }
    return 0;
}*/
///04.Count Total number of Capital and Small Letters from Accepted Line
/*#include<stdio.h>
int main() {
   int upper = 0, lower = 0;
   char ch[80];
   int i;
   printf("\nEnter The String : ");
   gets(ch);
   i = 0;
   while (ch[i] != '\0') {
      if (ch[i] >= 'A' && ch[i] <= 'Z')
         upper++;
      if (ch[i] >= 'a' && ch[i] <= 'z')
         lower++;
      i++;
   }
   printf("\nUppercase Letters : %d", upper);
   printf("\nLowercase Letters : %d", lower);
   return (0);
}*/
///05. Write a program to add two matrices.
/*#include<stdio.h>
int main(){
    int array1[100][100],array2[100][100],add_array[100][100];
    int i,j;
    printf("Enter a the value of first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter a the value of second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
     printf("Add the two matrix and result is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            add_array[i][j]=(array1[i][j]+array2[i][j]);
            printf("%d ",add_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
///06. Write a program to subtract one matrix from another.
/*#include<stdio.h>
int main(){
    int array1[100][100],array2[100][100],add_array[100][100];
    int i,j;
    printf("Enter a the value of first matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array1[i][j]);
        }
    }
    printf("Enter a the value of second matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&array2[i][j]);
        }
    }
     printf("Add the two matrix and result is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            add_array[i][j]=(array1[i][j]-array2[i][j]);
            printf("%d ",add_array[i][j]);
        }
        printf("\n");
    }
    return 0;
}*/
///07.Write a program to find the numbers greater than 5 and less than 500 divisible by 2 but not divisible by 4 or 6 and calculate their sum also.
/*#include<stdio.h>
int main()
{
    int i,sum=0;
    for(i=5;i<=500;i++){
        if(i%2==0 && i%4!=0 && i%6!=0)
        {
            sum+=i;
        }
    }
    printf("the number is: ");
    printf("sum of this number is: %d\n",sum);
    return 0;
}*/
///08. Write a program to calculate y where y=1^3+2^3+3^3+………. Using loop
/*#include<stdio.h>
int main()
{
    int i,n,y=0;
    printf("put the number is: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        y+=i*i*i;
    }
    printf("Result is: %d\n",y);
    return 0;
}*/
///09. Write a program to calculate y where y=1^2+2^2+3^2+………. Using loop
/*#include<stdio.h>
int main()
{
    int i,n,y=0;
    printf("put the number is: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        y+=i*i;
    }
    printf("Result is: %d\n",y);
    return 0;
}*/
///10. Write a program to calculate y where y=1+2+3+4+5........ using loop
/*#include<stdio.h>
int main()
{
    int i,n,y=0;
    printf("put the number is: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        y+=i;
    }
    printf("Result is: %d\n",y);
    return 0;
}*/
///11. Write a program to calculate y where y=1*2+2*3+3*4+4*5+........using loop
/*#include<stdio.h>
int main()
{
    int i,n,y=0;
    printf("Enter a the number is: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        y+=(i*(i+1));
    }
    printf("Result is: %d\n",y);
    return 0;
}*/
///12. Write a program to calculate and print Fibonacci numbers.
/*#include<stdio.h>
int main()
{
    int i,n,y=0;
    printf("Enter a the number is: ");
    scanf("%d",&n);
    int f1=0,f2=1;
    int fib[100];
    fib[0]=0,fib[1]=1;
    for(i=2;i<=n;i++)
    {
        fib[i]=f1+f2;
        f1=f2;
        f2=fib[i];
    }
    printf("0 to n th Fibonacci number is: ");
    for(i=0;i<=n;i++)
    {
        printf("%d ",fib[i]);
    }
    return 0;
}*/
///13. Write a program to print the Floyd's triangle .
/*#include <stdio.h>
int main() {
	int row,i,j,number= 1;
	printf("Number of rows of Floyd's triangle to print:");
	scanf("%d",&row);
	for ( i=1;i<=row;i++ ) {
		for ( j=1;j<=i;j++) {
			printf("%d ",number);
			number++;
		}
		printf("\n");
	}
	return 0;
}*/
///14. Write a program to find the numbers and their sum greater than 100 and less than 200 and divisible by 7
/*#include<stdio.h>
int main()
{
    int i,sum = 0;
    for(i = 100;i<= 200;i++)
    {
        if (i % 7 == 0)
        {
            sum = sum + i;
        }
    }
    printf("\n Sum of all no between 100 and 200 which is divisible by 7 is: %d\n",sum);
    return 0;
}*/
///15. Write a program a program using conditional operator to determine whether a number is even or odd and print the message “Number is Even” or “Number is Odd”
/*#include<stdio.h>
int main()
{
    int i,n,y=0;
    printf("Enter a the number is: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("“Number is Even\n");
    }
    else
    {
        printf("“Number is Odd\n");
    }
    return 0;
}*/
///16. Write a program to convert a given decimal number to its equivalent binary number.
/*#include<stdio.h>
int main()
{
    int n,i,k=0;
    int array[100];
    printf("Enter a the decimal number is: ");
    scanf("%d",&n);
    while(n!=0){
        array[k]=n%2;
        n/=2;
        k++;
    }
    printf("decimal number to convert binary number is: ");
    for(i=k-1;i>=0;i--)printf("%d",array[i]);
    printf("\n");
    return 0;
}*/
///17. Write a program to convert a given decimal number to its equivalent octal number.
/*#include<stdio.h>
int main()
{
    int n,i,k=0;
    int array[100];
    printf("Enter a the decimal number is: ");
    scanf("%d",&n);
    while(n!=0){
        array[k]=n%8;
        n/=8;
        k++;
    }
    printf("decimal number to convert octal number is: ");
    for(i=k-1;i>=0;i--)printf("%d",array[i]);
    printf("\n");
    return 0;
}*/
/// 18. Write a program to convert a given decimal number to its equivalent number of any given base.
/*#include<stdio.h>
int main()
{
    int n,i,k=0,b;
    int array[100];
    printf("Enter a the decimal number is: ");
    scanf("%d",&n);
    printf("Enter a the base is: ");
    scanf("%d",&b);
    while(n!=0){
        array[k]=n%b;
        n/=b;
        k++;
    }
    printf("decimal number to convert octal number is: ");
    for(i=k-1;i>=0;i--)printf("%d",array[i]);
    printf("\n");
    return 0;
}*/
///19. Write a program to convert a given Hexadecimal number to its equivalent decimal number.
/*#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
    int n,i,k=0,b,rem;
    char array[100];
    printf("Enter a the decimal number is: ");
    scanf("%d",&n);
    while(n!=0){
        rem=n%16;
        n/=16;
        if(rem<10)
        {
            array[k]=(char)(rem+48);
        }
        else
        {
            array[k]=(char)(rem+'A'-10);
        }
        k++;
    }
    printf("decimal number to convert octal number is: ");
    for(i=k-1;i>=0;i--)printf("%c",array[i]);
    printf("\n");
    return 0;
}*/
///20. Write a program to convert a given Hexadecimal number to its equivalent binary number.
/*#include <stdio.h>
#include <math.h>
#include <string.h>
int main() {
    long long decimalNumber=0;
    char hexDigits[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8','9', 'A', 'B', 'C', 'D', 'E', 'F'};
    char hexadecimal[30];
    int i, j, power=0, digit;
    printf("Enter a Hexadecimal Number: ");
    scanf("%s", hexadecimal);
    for(i=strlen(hexadecimal)-1;i >= 0;i--) {
        for(j=0; j<16; j++){
            if(hexadecimal[i] == hexDigits[j]){
                decimalNumber += j*pow(16, power);
            }
        }
        power++;
    }
    printf("Decimal Number : %ld", decimalNumber);
    return 0;
}*/
///21. Write a program which will take an integer and print a message whether it is leap year or not.
/*#include <stdio.h>
int main()
{
  int year;
  printf("Enter a year to check if it is a leap year: ");
  scanf("%d", &year);
  if ( year%400 == 0)
    printf("%d is a leap year.\n", year);
  else if ( year%100 == 0)
    printf("%d is not a leap year.\n", year);
  else if ( year%4 == 0 )
    printf("%d is a leap year.\n", year);
  else
    printf("%d is not a leap year.\n", year);
  return 0;
}*/
///22. Write a simple program that can count how many consonants and vowels in your fullname.
/*#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    int i,v_count=0,c_count=0;
    printf("Enter your name: ");
    gets(ch);
    int len=strlen(ch);
    for(i=0;i<len;i++){
        if((ch[i]>='a'&& ch[i]<='z')||(ch[i]>='A' && ch[i]<='Z')){
            if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' || ch[i]=='A' || ch[i]=='E'|| ch[i]=='I'||ch[i]=='O' || ch[i]=='U'){
                v_count++;
           }
           else c_count++;
       }
    }
    printf("vowels number is: %d\n",v_count);
    printf("consonants number is: %d\n",c_count);
    return 0;
}*/
///23.write a program to determine the grade of a student where the grades are designed
/*#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks: ");
    scanf("%d",&marks);
    printf("you get grade: ");
    if(marks>79)printf("A+\n");
    else if(marks>74 && marks<80) printf("A\n");
    else if(marks>69 && marks<75) printf("A-\n");
    else if(marks>64 && marks<70) printf("B+\n");
    else if(marks>59 && marks<65) printf("B\n");
    else if(marks>50 && marks<60) printf("C\n");
    else if(marks>40 && marks<50) printf("D\n");
    else printf("F\n");
    return 0;
}*/
///24.Using for loop write a program to display the following triangle:
/*#include<stdio.h>
int main(){
    int i,j,number=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=i;j++){
            printf("%5d",number);
            number++;
        }
        printf("\n");
    }
    return 0;
}*/
///25.Given a set of numbers find the greatest common divisor using function.
/*#include<stdio.h>
int main(){
    int a,b,tem,x,y;
    printf("Enter two number: ");
    scanf("%d%d",&a,&b);
    x=a,y=b;
    while(b!=0){
        tem=a;
        a=b;
        b=tem%b;
    }
    printf("GCD(%d,%d)=%d\n",x,y,a);
    return 0;
}*/
///26.Write a program to print digits in reverse order of an integer.
/*#include<stdio.h>
int main(){
    int num,rev_num=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    while(num!=0){
        rev_num=rev_num*10+num%10;
        num/=10;
    }
    printf("Reverse number is: %d",rev_num);
    return 0;
}*/
///27.Write a program to calculate factorial for n number of integers.
/*#include<stdio.h>
int main(){
    int num,i;
    long long res=1;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=1;i<=n;i++){
        res*=i;
    }
    printf("factorial %d!=%lld\n",num,res);
    return 0;
}*/
///28.Write a C program to check given number is prime number or not .
/*#include<stdio.h>
int main(){
    int num,i,t=0;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=2;i*i<=num;i++){
        if(num%i==0){
            t++;
            break;
        }
    }
    if(t==1) printf("%d is not a prime number\n",num);
    else printf("%d is a prime number\n",num);
    return 0;
}*/
///29. Write a program to evaluate equation distance=ut+(at^2)/2 by varying time.
/*#include<stdio.h>
int main(){
    double distance,u,a,t;
    printf("Enter the value of u: ");
    scanf("%lf",&u);
    printf("Enter the value of a: ");
    scanf("%lf",&a);
    printf("Enter the value of t: ");
    scanf("%lf",&t);
    distance=(u*t)+(a*t*t)/2;
    printf("distance=%.2lf\n",distance);
    return 0;
}*/
///30.Write a C Program to Find Factorial of a Number Using user defined functions.
/*#include<stdio.h>
long long Factorial(int n){
    long long res=1;
    int i;
    for(i=1;i<=n;i++){
        res*=i;
    }
    return res;
}
int main(){
    int n;
     printf("Enter the number: ");
     scanf("%d",&n);
    long long ans=Factorial(n);
    printf("Factorial %d!=%lld\n",n,ans);
    return 0;
}*/
///31.Write a C Program To Read Three Numbers And Print The Biggest Of Given Three Numbers.
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    int mx;
    if(a<b){
        if(b<c)mx=c;
        else mx=b;
    }
    else{
        if(a<c)mx=c;
        else mx=a;
    }
    printf("The biggest number is: %d\n",mx);
    return 0;
}*/
///32.Write a C Program To Read Three Numbers And Print The Smallest Of Given Three Numbers.
/*#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter three number: ");
    scanf("%d%d%d",&a,&b,&c);
    int mn;
    if(a>b){
        if(b>c)mn=c;
        else mn=b;
    }
    else{
        if(a>c)mn=c;
        else mn=a;
    }
    printf("The smallest number is: %d\n",mn);
    return 0;
}*/
///33.Write a C program to summation only even numbers from 1 to n.
/*#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i+=2){
        sum+=i;
    }
    printf("summition of even number result is: %d\n",sum);
    return 0;
}*/
///34.Write a C program to summation only odd numbers from 1 to n.
/*#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2){
        sum+=i;
    }
    printf("summition of odd number result is: %d\n",sum);
    return 0;
}*/
///35. Write a C program to read a number and find this number negative or positive.
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    if(n>=0) printf("%d is positive number\n",n);
    else printf("%d is negative number\n",n);
    return 0;
}*/
///36. Write a C program to given a string and print reverse this string.
/*#include<stdio.h>
#include<string.h>
int main(){
    char ch[100];
    printf("Enter the string: ");
    scanf("%s",ch);
    int len=strlen(ch);
    int i;
    printf("%s  reverse is: ",ch);
    for(i=len-1;i>=0;i--){
        printf("%c",ch[i]);
    }
    return 0;
}*/
///37. Write a C program summation of digit of an integer number.
/*#include<stdio.h>
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int sum=0;
    while(n!=0){
        sum+=(n%10);
        n/=10;
    }
    printf("summation of digit result is: %d",sum);
    return 0;
}*/
///38.Write a C program given a number check the given number is palindrome or not.
/*#include<stdio.h>
int main(){
    int n,x;
    printf("Enter the number: ");
    scanf("%d",&n);
    x=n;
    int sum=0;
    while(n!=0){
        sum=sum*10+(n%10);
        n/=10;
    }
    if(sum==x) printf("%d is palindrome number\n",x);
    else printf("%d is not palindrome number\n",x);
    return 0;
}*/
///39.Write a C program given a string check the given string is palindrome or not.
/*#include<stdio.h>
#include<string.h>
int main(){
    char ch1[100],ch2[100];
    printf("Enter the string: ");
    scanf("%s",ch1);
    int len=strlen(ch1);
    int i,k=0;
    for(i=len-1;i>=0;i--){
        ch2[k++]=ch1[i];
    }
    if(strcmp(ch1,ch2)==0) printf("%s is palindrome number\n",ch1);
    else printf("%s is not palindrome number\n",ch1);
    return 0;
}*/
///40.Write a C program given a number and find this number is perfect or not.
/*#include<stdio.h>
int main(){
    int n,x,i,sum=0;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if(n/i!=i){
                sum+=n/i;
            }
        }
    }
    if(sum==2*n) printf("%d is perfect number\n",n);
    else printf("%d is not perfect number\n",n);
    return 0;
}*/
///41.Write a C program accept roll number, marks in 3 subjects and calculate total, average and print it.
/*# include <stdio.h>
int main()
{
    int roll,first_subject,second_subject,third_subject,total_marks,avarage_marks;
    printf ("\tEnter student roll: ");
    scanf ("%d",&roll);
    printf("\tEnter first subject marks: ");
    scanf("%d",&first_subject);
    printf("\tEnter second subject marks: ");
    scanf("%d",&second_subject);
    printf("\tEnter third subject marks: ");
    scanf("%d",&third_subject);
    total_marks=first_subject+second_subject+third_subject;
    avarage_marks=total_marks/3;
   printf("\t Student roll: %d\n",roll);
   printf("\t First subject marks: %d\n",first_subject);
   printf("\t Second subject marks: %d\n",second_subject);
   printf("\t Third subject marks: %d\n",third_subject);
   printf("\t Total marks: %d\n",total_marks);
   printf("\t Total marks: %d\n",avarage_marks);
   return 0;
}*/
///42.Write a C program given two number and sum the two number, subtract, multiplication, division, remainder.
/*#include<stdio.h>
int main(){
    int num1,num2;
    int add,subtract,multiplication, division, remainder;
    printf("Enter twow number: ");
    scanf("%d%d",&num1,&num2);
    add=num1+num2;
    subtract=num1-num2;
    multiplication=num1*num2;
    division=num1/num2;
    remainder=num1%num2;
    printf("Result is: \n");
    printf("%3d + %3d=%3d\n",num1,num2,add);
    printf("%3d - %3d=%3d\n",num1,num2,subtract);
    printf("%3d * %3d=%3d\n",num1,num2,multiplication);
    printf("%3d / %3d=%3d\n",num1,num2,division);
    printf("%3d %% %3d=%3d\n",num1,num2,remainder);
    return 0;
}*/
///43.Write a C program given a number and check the given number is armstrong number or not.
/*#include <stdio.h>
int main( )
{
    int num,num1,num2,num3,sum,x;
    printf("Enter number: ");
    scanf("%d",&num);
    x=num;
    num1=num%10;
    num/=10;
    num2=num%10;
    num/=10;
    num3=num;
    sum=(num1*num1*num1)+(num2*num2*num2)+(num3*num3*num3);
    if(sum==num)printf ("%d is Armstrong number",x);
    else printf ("%d is not Armstrong number",x);
    return 0;
}*/
///44.Write a C program to print 1 to n odd number.
/*# include <stdio.h>
int main(){
    int i,n;
    printf("Enter the number:\t");
    scanf("%d",&n);
    printf(" 1 to n odd number is: ");
    for (i=1;i<=n;i+=2) printf("%d\t",i);
    return 0;
}*/
///45.Write a C program to print 1 to n even number.
/*#include <stdio.h>
int main(){
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("1 to n even number is:\t");
    for (i=2;i<=n;i+=2) printf("%d\t",i);
    return 0;
}*/
///46.Write a C program to print 1 to n in reverse.
/*#include<stdio.h>
int main(){
    int i,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("1 to n reverse number is:\t");
    for (i=n;i>=1;i--) printf("%d\t",i);
    return 0;
}*/
///47.Write a C program 1 to n mathematical table.
/*#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        printf("mathematical table of %d:\n",i);
        for(j=1;j<=10;j++){
            printf("%d x %d = %d\n",i,j,i*j);
        }
        printf("\n\n");
    }
    return 0;
}*/
///48.Write a C program a character in upper case and print in lower case and print ascii value this character.
/*#include<stdio.h>
int main(){
    char ch;
    printf("Enter the upper case char: ");
    scanf("%c",&ch);
    printf("The lower char is: %c\n",ch+32);
    printf("%c ASCII value  is: %d\n",ch,ch);
    return 0;
}*/
///49. Write a C program a character in lower case and print in upper case print ascii value this character.
/*#include<stdio.h>
int main(){
    char ch;
    printf("Enter the lower case char: ");
    scanf("%c",&ch);
    printf("The upper char is: %c\n",ch-32);
    printf("%c ASCII value  is: %d\n",ch,ch);
    return 0;
}*/
///50.Write a C program given two number and find that biggest number and smallest number using ternary operator.
/*#include<stdio.h>
int main(){
    int num1,num2,mn,mx;
    printf("Enter two number: ");
    scanf("%d%d",&num1,&num2);
    mx=((num1>num2)?num1:num2);
    mn=((num1<num2)?num1:num2);
    printf("the minimum number is: %d\n",mn);
    printf("the maximum number is: %d\n",mx);
    return 0;
}*/
