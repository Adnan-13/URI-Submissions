#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;

    scanf("%d", &t);

    while(t--)
    {
        int year;

        scanf("%d", &year);

        if(year >= 2015) printf("%d A.C.\n", year - 2015 + 1);

        else printf("%d D.C.\n", 2015 - year);
    }

    return 0;
}
