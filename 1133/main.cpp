#include <bits/stdc++.h>

using namespace std;

int main()
{
    int range[2];

    scanf("%d%d", &range[0], &range[1]);

    sort(range, range+2);

    for(int i=range[0]+1; i<range[1]; i++)
    {
        if(i%5==2 || i%5==3)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}
