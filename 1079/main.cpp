#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;

    scanf("%d", &cases);

    while(cases--)
    {
        double a, b, c;

        scanf("%lf%lf%lf", &a, &b, &c);

        printf("%.1lf\n", (a*2+b*3+c*5)/(2+3+5));

    }

    return 0;
}
