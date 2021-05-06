#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, t=6;

    scanf("%d", &n);

    if(n%2==0)
    {
        n++;
    }

    while(t--)
    {
        printf("%d\n", n);
        n+=2;
    }

    return 0;
}
