#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int fibo[61], n1, n2;

    fibo[0] = n1 = 0;
    fibo[1] = n2 = 1;

    for(int i=2; i<61; i++)
    {
        long long int n3 = n1+n2;

        fibo[i]=n3;

        n1=n2;
        n2=n3;
    }

    int cases;

    scanf("%d", &cases);

    while(cases--)
    {
        int n;

        scanf("%d", &n);

        printf("Fib(%d) = %lld\n", n, fibo[n]);
    }

    return 0;
}
