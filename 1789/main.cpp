#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numberOfSlugs;

    while(scanf("%d", &numberOfSlugs) == 1)
    {
        int speed, highestSpeed = -1, level;

        for(int i=1; i<=numberOfSlugs; i++)
        {
            scanf("%d", &speed);

            highestSpeed = max(speed, highestSpeed);
        }

        if(highestSpeed<10)
        {
            level = 1;
        }

        else if(highestSpeed >= 10 && highestSpeed < 20)
        {
            level = 2;
        }

        else
        {
            level = 3;
        }

        printf("%d\n", level);
    }

    return 0;
}
