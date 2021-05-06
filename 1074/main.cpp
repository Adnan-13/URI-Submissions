#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, num;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &num);

        if(num==0)
        {
            printf("NULL\n");
            continue;
        }


        if(num%2==0)
        {
            printf("EVEN ");
        }

        else
        {
            printf("ODD ");
        }

        if(num>0)
        {
            printf("POSITIVE\n");
        }
        else
        {
            printf("NEGATIVE\n");
        }
    }

    return 0;
}
