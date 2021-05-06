#include <bits/stdc++.h>

using namespace std;

int main()
{
    double priceOld, priceNew;

    scanf("%lf%lf", &priceOld, &priceNew);

    printf("%.2lf%%\n", (((priceNew - priceOld) * 100) / priceOld));

    return 0;
}
