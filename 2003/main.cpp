#include <bits/stdc++.h>

using namespace std;

int main()
{
    int hour, minute;

    while(scanf("%d:%d", &hour, &minute) == 2)
    {
        int totalMin = hour * 60 + minute;

        if(480 - totalMin < 60) printf("Atraso maximo: %d\n", 60 - (480 - totalMin));

        else printf("Atraso maximo: 0\n");
    }

    return 0;
}
