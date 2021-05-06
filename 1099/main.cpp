#include <bits/stdc++.h>

using namespace std;

int main()
{
    int cases;

    scanf("%d", &cases);

    while(cases--)
    {
        int x[2];

        scanf("%d%d", &x[0], &x[1]);

        sort(x, x+2);

        int sum=0;

        for(int i=x[0]+1; i<x[1]; i++)
        {
            if(i%2!=0)
            {
                sum+=i;
            }
        }

        printf("%d\n", sum);
    }

    return 0;
}
