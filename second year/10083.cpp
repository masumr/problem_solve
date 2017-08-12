#include<vector>
#include <cstdio>
#include <string>
#include <algorithm>
#include <iostream>
#include<sstream>
#include<math.h>
using namespace std;

struct Bigint {
    // representations and structures
    string a; // to store the digits
    int sign; // sign = -1 for negative numbers, sign = 1 otherwise

    // constructors
    Bigint() {}
    Bigint( string b ) { (*this) = b; }
    int size() {
        return a.size();
    }
    Bigint inverseSign() {
        sign *= -1;
        return (*this);
    }
    Bigint normalize( int newSign ) {
        for( int i = a.size() - 1; i > 0 && a[i] == '0'; i-- )
            a.erase(a.begin() + i);
        sign = ( a.size() == 1 && a[0] == '0' ) ? 1 : newSign;
        return (*this);
    }

    /// assignment operator
    void operator = ( string b ) {
        a = b[0] == '-' ? b.substr(1) : b;
        reverse( a.begin(), a.end() );
        this->normalize( b[0] == '-' ? -1 : 1 );
    }

    /// conditional operators

    /// less than operator
    bool operator < ( const Bigint &b ) const {
        if( sign != b.sign ) return sign < b.sign;
        if( a.size() != b.a.size() )
            return sign == 1 ? a.size() < b.a.size() : a.size() > b.a.size();
        for( int i = a.size() - 1; i >= 0; i-- ) if( a[i] != b.a[i] )
            return sign == 1 ? a[i] < b.a[i] : a[i] > b.a[i];
        return false;
    }
    /// operator for equality
    bool operator == ( const Bigint &b ) const {
        return a == b.a && sign == b.sign;
    }

    ///mathematical operators

    /// addition operator overloading
    Bigint operator + ( Bigint b ) {
        if( sign != b.sign ) return (*this) - b.inverseSign();
        Bigint c;
        for(int i = 0, carry = 0; i<a.size() || i<b.size() || carry; i++ ) {
            carry+=(i<a.size() ? a[i]-48 : 0)+(i<b.a.size() ? b.a[i]-48 : 0);
            c.a += (carry % 10 + 48);
            carry /= 10;
        }
        return c.normalize(sign);
    }
    /// subtraction operator overloading
    Bigint operator - ( Bigint b ) {
        if( sign != b.sign ) return (*this) + b.inverseSign();
        int s = sign; sign = b.sign = 1;
        if( (*this) < b ) return ((b - (*this)).inverseSign()).normalize(-s);
        Bigint c;
        for( int i = 0, borrow = 0; i < a.size(); i++ ) {
            borrow = a[i] - borrow - (i < b.size() ? b.a[i] : 48);
            c.a += borrow >= 0 ? borrow + 48 : borrow + 58;
            borrow = borrow >= 0 ? 0 : 1;
        }
        return c.normalize(s);
    }
    /// multiplication operator overloading
    Bigint operator * ( Bigint b ) {
        Bigint c("0");
        for( int i = 0, k = a[i] - 48; i < a.size(); i++, k = a[i] - 48 ) {
            while(k--) c = c + b;
            b.a.insert(b.a.begin(), '0');
        }
        return c.normalize(sign * b.sign);
    }
    /// division operator overloading
    Bigint operator / ( Bigint b ) {
        if( b.size() == 1 && b.a[0] == '0' ) b.a[0] /= ( b.a[0] - 48 );
        Bigint c("0"), d;
        for( int j = 0; j < a.size(); j++ ) d.a += "0";
        int dSign = sign * b.sign; b.sign = 1;
        for( int i = a.size() - 1; i >= 0; i-- ) {
            c.a.insert( c.a.begin(), '0');
            c = c + a.substr( i, 1 );
            while( !( c < b ) ) c = c - b, d.a[i]++;
        }
        return d.normalize(dSign);
    }
    /// modulo operator overloading
    Bigint operator % ( Bigint b ) {
        if( b.size() == 1 && b.a[0] == '0' ) b.a[0] /= ( b.a[0] - 48 );
        Bigint c("0");
        b.sign = 1;
        for( int i = a.size() - 1; i >= 0; i-- ) {
            c.a.insert( c.a.begin(), '0');
            c = c + a.substr( i, 1 );
            while( !( c < b ) ) c = c - b;
        }
        return c.normalize(sign);
    }
/// output method
    void print() {
        if( sign == -1 ) putchar('-');
        for( int i = a.size() - 1; i >= 0; i-- ) putchar(a[i]);
    }
    int len(){
        return a.size();
    }
};
typedef long long int ll;
Bigint power(Bigint n,ll p){
    if(p==1)return n;
    Bigint t=power(n,p/2);
    t=t*t;
    if(p&1)t=t*n;
    return t;
}
int main(){
    string a;
    int b,c;
    string pp="1";
    Bigint m=pp;
    while(cin>>a>>b>>c){
         cout<<"("<<a<<"^"<<b<<"-1"<<")/"<<"("<<a<<"^"<<c<<"-1"<<") ";
        if(a=="1"){
            printf("is not an integer with less than 100 digits.\n");
            continue;
        }
        //p1.print();puts("");
        if(b%c || b<c)printf("is not an integer with less than 100 digits.\n");
        else {
                Bigint x1=a;
                Bigint p1=power(x1,b),p2=power(x1,c);
                p1=p1-pp;p2=p2-pp;
        //p1.print();puts("");p2.print();puts("");
                p1=p1/p2;
                if(p1.len()>100)printf("is not an integer with less than 100 digits.\n");
                else {p1.print();puts("");}
        }
    }
}
