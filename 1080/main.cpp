#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, maximum, position;

    scanf("%d", &num);

    maximum=num;
    position=1;

    for(int i=2; i<=100; i++)
    {
        scanf("%d", &num);

        if(num>maximum)
        {
            maximum=num;

            position=i;
        }
    }

    printf("%d\n%d\n", maximum, position);

    return 0;
}
