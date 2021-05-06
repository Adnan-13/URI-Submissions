#include <bits/stdc++.h>

using namespace std;

int main()
{
    int range[2], sum=0;

    scanf("%d%d", &range[0], &range[1]);

    sort(range, range+2);

    for(int i=range[0]; i<=range[1]; i++)
    {
        if(i%13!=0)
        {
            sum+=i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
