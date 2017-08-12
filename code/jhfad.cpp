#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, cnt = 0;
    cin >> n;
    while(n)
    {
    n &= (n-1);
    cnt++;
    }
    cout << cnt <<endl;
    return 0;
}
