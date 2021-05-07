#include <bits/stdc++.h>

using namespace std;

int main()
{
    int line;
    scanf("%d", &line);

    int num=1;

    for(int i=1; i<=line; i++)
    {
        for(int j=1; j<=3; j++)
        {
            printf("%d ", num++);
        }
        printf("PUM\n");
        num++;
    }

    return 0;
}
