#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cstring>
#include <string>
#include <cctype>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <sstream>
#include <set>
#include <math.h>
#define pi acos(-1.0)
#define N 1000000
using namespace std;


int main ()
{
    int numerator;
    int denominator;

    while ( scanf ("%d %d", &numerator, &denominator) ) {
        if ( numerator == 0 && denominator == 0 )
            break;
        map <int, int> m;
        int quotient;
        int mod = (numerator % denominator) * 10;
        string afterDecimal = "";
        int repeatTermIndex = 1;

        while ( m [mod] == 0 ) {
            m [mod] = repeatTermIndex++;
            quotient = mod / denominator;
            mod %= denominator;
            afterDecimal += (quotient + '0');
            mod *= 10;
        }

        int parenthesisStart = m [mod];
        int repeatedCycle = repeatTermIndex - parenthesisStart;
        cout << ".";

        if ( repeatedCycle == 1 && afterDecimal.at (afterDecimal.size () - 1) == '0' ) {
            for ( int i = 0; i < afterDecimal.size () - 1; i++ )
                cout << afterDecimal.at (i);
            //if ( afterDecimal.at (afterDecimal.size () - 1) != '0' )
                //cout << afterDecimal.at (afterDecimal.size () - 1);
            cout << endl;
            cout << "This expansion terminates." << endl;
            //cout << "(" << afterDecimal.at (afterDecimal.size () - 1) << ")" << endl;
        }
        else if ( repeatTermIndex > 50 ) {
            for ( int i = 0; i < afterDecimal.size (); i++ ) {
                if ( (i + 1) % 50 == 0 )
                    cout << endl;
                cout << afterDecimal.at (i);
            }
            cout << endl;
            printf ("The last %d digits repeat forever.\n", repeatedCycle);
        }
        else {
            for ( unsigned int i = 0; i < afterDecimal.size (); i++ ) {
                cout << afterDecimal.at (i);
            }
            cout << endl;
            printf ("The last %d digits repeat forever.\n", repeatedCycle);
        }

        cout << endl;
    }

    return 0;
}
