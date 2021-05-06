#include <bits/stdc++.h>

using namespace std;

int main()
{
    int numbersInOneLine, range;

    scanf("%d%d", &numbersInOneLine, &range);

    int i=1;
    while(i<=range)
    {
        for(int j=1; j<=numbersInOneLine; j++)
        {
            if(i>range) break;
            printf("%d", i++);
            if(j!=numbersInOneLine)
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
