#include <stdio.h>

main()
{
    long long int dectime, tradtime;
    int dh,dm,ds,dc,th,tm,ts,tc;

    while(scanf("%lld", &tradtime) != EOF)
    {
        tc = tradtime % 100;
        tradtime = tradtime / 100;
        ts = tradtime % 100;
        tradtime = tradtime / 100;
        tm = tradtime % 100;
        tradtime = tradtime / 100;
        th = tradtime % 100;

        long long int totaltime = th*360000 + tm*6000 + ts*100+tc;

        dectime = (125 *totaltime)/108;
        printf("%07lld\n", dectime);

    }
}
