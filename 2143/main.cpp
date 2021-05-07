#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    while(scanf("%d", &t) && t)
    {
        while(t--)
        {
            int n;

            scanf("%d", &n);

            if(n % 2 == 0)
            {
                printf("%d\n", (n - 1) * 2);
            }

            else
            {
                printf("%d\n", (n - 1) * 2 + 1);
            }
        }
    }

    return 0;
}
