#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    int prod=1;

    for(int i=0; i<n; i++)
    {
        prod*=(n-i);
    }

    printf("%d\n", prod);

    return 0;
}
