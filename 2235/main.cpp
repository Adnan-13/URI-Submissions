#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c;

    scanf("%d%d%d", &a, &b, &c);

    bool possible = false;

    if(a - b == 0 || b - c == 0 || c - a == 0)  possible = true;

    if(a + b - c == 0 || a - b + c == 0 || a - (b + c) == 0) possible = true;

    if(possible) printf("S\n");

    else printf("N\n");

    return 0;
}
