#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int h, m, o;

        scanf("%d%d%d", &h, &m, &o);

        printf("%02d:%02d - A porta ", h, m);

        if(o == 1)
        {
            printf("abriu!\n");
        }

        else
        {
            printf("fechou!\n");
        }
    }
}
