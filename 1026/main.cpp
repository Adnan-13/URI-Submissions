#include <bits/stdc++.h>

using namespace std;

int main()
{
    unsigned long num1, num2;

    while(scanf("%lu%lu", &num1, &num2) == 2)
    {
        unsigned long ans = num1 ^ num2;

        printf("%lu\n", ans);
    }

    return 0;
}
