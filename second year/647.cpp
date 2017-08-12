
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

vector <int> ddf [3000 + 5];

int digitSum (int n)
{
    int sum = 0;

    while ( n ) {
        sum += ( n % 10 );
        n /= 10;
    }

    return sum;
}

int nextDDF (int n)
{
    int total = 0;

    for ( int i = 1; i <= n; i++ ) {
        if ( n % i == 0 )
            total += digitSum (i);
    }

    return total;
}

int main ()
{
    for ( int i = 0; i < 3005; i++ )
        ddf [i].clear ();

    for ( int i = 0; i < 3005; i++ ) {
        map <int, bool> m;
        int nextTerm = nextDDF (i);
        ddf [i].push_back (i);
        m [i] = true;
        while ( m [nextTerm] == false ) {
            m [nextTerm] = true;
            ddf [i].push_back (nextTerm);
            nextTerm = nextDDF (nextTerm);
        }
    }

    int n;
    int m;
    int cases = 1;

    while ( scanf ("%d %d", &m, &n) != EOF ) {
        int save_m = m;
        int save_n = n;
        if ( m > n )
            swap (m, n);

        unsigned int maxSize = 0;
        int output;

        for ( int i = m; i <= n; i++ ) {
            if ( maxSize < ddf [i].size () ) {
                maxSize = ddf [i].size ();
                output = i;
            }
        }

        printf ("Input%d: %d %d\n", cases, save_m, save_n);
        printf ("Output%d:", cases++);

        for ( unsigned int i = 0; i < ddf [output].size (); i++ )
            printf (" %d", ddf [output] [i]);

        printf ("\n");
    }
    return 0;
}
