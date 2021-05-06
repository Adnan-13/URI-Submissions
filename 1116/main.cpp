#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;
    scanf("%d", &cases);

    while(cases--)
    {
        int x,y;

        scanf("%d%d", &x, &y);

        if(y==0)
        {
            printf("divisao impossivel\n");

            continue;
        }

        printf("%.1f\n", (x+0.0)/y);
    }

    return 0;
}
