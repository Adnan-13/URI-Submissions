#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x[2];

    while(scanf("%d%d", &x[0], &x[1]) && x[0]>0 && x[1]>0)
    {
        sort(x, x+2);

        int sum=0;

        for(int i=x[0]; i<=x[1]; i++)
        {
            sum+=i;

            printf("%d ", i);
        }

        printf("Sum=%d\n", sum);
    }

    return 0;
}
