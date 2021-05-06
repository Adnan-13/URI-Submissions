#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    double total = 0;

    while(t--)
    {
        int code, qnt;

        scanf("%d%d", &code, &qnt);

        if(code == 1001) total += 1.5 * qnt;

        else if(code == 1002) total += 2.50 * qnt;

        else if(code == 1003) total += 3.50 * qnt;

        else if(code == 1004) total += 4.50 * qnt;

        else if(code == 1005) total += 5.50 * qnt;
    }

    printf("%.2lf\n", total);

    return 0;
}
