#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T,N,ntest=1;
    vector<int> v;
    scanf("%d\n",&T);
    while(T--)
    {
        scanf("%d\n",&N);
        v.clear();
        while(N >= 2)
        {
            v.push_back(N % 2);
            N /= 2;
        }
        v.push_back(N);
        v.push_back(0);
        reverse(v.begin(), v.end());
        next_permutation(v.begin(), v.end());
        long long ans = 0;
        int pos = 0;
        for(int i = v.size() - 1; i >= 0; i--)
        {
            if(v[i])
                ans |= (1 << pos);
            pos++;
        }
        printf("Case %d: %lld\n",ntest++,ans);
    }
    return 0;
}
