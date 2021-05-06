#include <bits/stdc++.h>

using namespace std;

int main()
{
    int line;

    scanf("%d", &line);

    for(long long int i=1; i<=line; i++)
    {
        printf("%lld %lld %lld\n", i, i*i, i*i*i);
    }

    return 0;
}
