#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x;

    while(scanf("%d", &x) && x)
    {
        if(x%2!=0)
        {
            x++;
        }

        int sum=0;

        for(int i=1; i<=5; i++)
        {
            sum+=x;

            x+=2;
        }

        printf("%d\n", sum);
    }

    return 0;
}
