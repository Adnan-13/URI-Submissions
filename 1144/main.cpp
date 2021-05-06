#include <bits/stdc++.h>

using namespace std;

int main()
{
    int lines;

    scanf("%d", &lines);

    for(long long int i=1; i<=lines; i++)
    {
        printf("%lld %lld %lld\n", i, i*i, i*i*i);
        printf("%lld %lld %lld\n", i, i*i+1, i*i*i+1);
    }

    return 0;
}
