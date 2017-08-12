#include<stdio.h>
#include<string.h>
#define MAXN 10000
int prime[MAXN];
int flag[MAXN];

int is_prime()
{
    int i, j, n = 0;
    memset(flag, 0, sizeof(flag));
    for(i=2; i<MAXN; ++i)
    {
        if(!flag[i])
        {
            prime[n++] = i;
            flag[i] = 1;
            for(j=i+i; j<MAXN; j+=i)
            flag[j] = 1;
        }
    }

    return n;
}

int main()
{
    int term, track, i, T, cnt = 0, n, temp, a, b, c, d;
    term = is_prime();
    scanf("%d", &T);
    while(++cnt <= T)
    {
        scanf("%d", &n);
        temp = n;

        for(track=i=0; n != 1 && n != 0 && i<term; ++i)
        {
            while(n%prime[i] == 0)
            {
                flag[track++] = prime[i];
                n /= prime[i];
            }
        }
        if(n != 1) flag[track++] = n;

        a = temp/flag[0], b = temp/a;
        for(c=d=1,i=0; i<track; ++i)
        {
            c *= flag[i];
            if(c != a && c != b) break;
        }

        d = temp/c;
        printf("Case #%d: %d = %d * %d = %d * %d\n", cnt, temp, a, b, c, d);
    }

    return 0;
}
