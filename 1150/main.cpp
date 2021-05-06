#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x,z;

    scanf("%d", &x);

    while(true)
    {
        scanf("%d", &z);

        if(z>x) break;
    }

    int sum=0, c=0;

    for(int i=x; ;i++)
    {
        sum+=i;
        c++;
        if(sum>z)
        {
            printf("%d\n", c);
            break;
        }
    }

    return 0;
}
