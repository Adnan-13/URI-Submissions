#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, x, in=0, out=0;

    scanf("%d", &n);

    while(n--)
    {
        scanf("%d", &x);

        if(x>=10 && x<=20)
        {
            in++;
        }
        else
        {
            out++;
        }
    }

    printf("%d in\n", in);

    printf("%d out\n", out);

    return 0;
}
