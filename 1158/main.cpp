#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;

    scanf("%d", &cases);

    while(cases--)
    {
        int sum=0, x, y;

        scanf("%d%d", &x, &y);

        if(x%2==0)
        {
            x++;
        }

        for(int i=1; i<=y; i++)
        {
            sum+=x;

            x+=2;
        }

        printf("%d\n", sum);

    }

    return 0;
}
