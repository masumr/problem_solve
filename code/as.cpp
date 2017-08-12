#include <iostream>
//#include<fstream>
using namespace std;

int gcd(int a, int b)
{
	if(b == 0)
	{
	        return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}
int extended_gcd(int a,int b)
{
	int x,y;
	if (a%b==0)
        return (0, 1);
    (x, y) = extended_gcd(b, a%b);
    return (y, x-(y*(a/b));
}

int main()
{
     int a,b;
     //ofstream outf("f://output.txt",ios::out);
     cout << "Input first number: ";
	 //outf<< "Input first number: ";
     cin >> a;
	 //outf << a<<endl;
     cout << "Input second number: ";
	 //outf<<"Input second number: ";
     cin >> b;
	 //outf<< b<<endl;

     cout << "Greatest common divisior (GCD) is " << gcd(a,b) << endl;
	 //outf<<"Greatest common divisior (GCD) is " << gcd(a,b) << endl;
	 cout<<"The extended Euclid is "<<extended_gcd(a,b)<<endl;
	 return 0;
}
