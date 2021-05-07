#include <bits/stdc++.h>

using namespace std;

long long int fact(long long int num)
{
    long long int prod = 1;

    for(long long int i = 1; i <= num; i++)
    {
        prod *= i;
    }

    return prod;
}


int main()
{
    long long int num1, num2;

    while(scanf("%lld%lld", &num1, &num2) == 2)
    {
        long long int sum = fact(num1) + fact(num2);

        printf("%lld\n", sum);
    }


    return 0;
}
