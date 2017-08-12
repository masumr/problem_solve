#include<bits/stdc++.h>
#define N 1000000
#define LL long long

#define For(i, a, b) for ( int i = (a); i < (b); i++ )
#define Fors(i, sz) for ( size_t i = 0; i < sz.size (); i++ )
#define Set(a, s) memset (a, s, sizeof (a))

using namespace std;

string str;
string total;
int k, w;

bool isMatch (int pos)
{
    for ( int i = pos; i < total.size (); i++ ) {
        if ( total [i] != str [i - pos] ) return false;
    }

    return true;
}

void minimize ()
{
    int pos = total.size () - k;

    for ( int i = pos; i < total.size (); i++ ) {
        if ( isMatch (i) ) {
            for ( int j = total.size () - i; j < str.size (); j++ )
                total += str [j];
            return;
        }
    }
    total += str;
}

int main(int argc, char** argv) {
    int testCase;
    scanf ("%d", &testCase);

    while ( testCase-- ) {
        scanf ("%d %d", &k, &w);
        total = "";

        For (i, 0, w) { cin >> str; minimize (); }

        cout << total.size() << endl;
    }

    return 0;
}
