#include <bits/stdc++.h>

using namespace std;

int main()
{
    double n[100];

    double num;

    scanf("%lf", &num);

    for(int i=0; i<100; i++)
    {

        n[i]=num;

        num/=2;

    }

    for(int i=0; i<100; i++)
    {
        printf("N[%d] = %.4lf\n", i, n[i]);
    }

    return 0;
}
