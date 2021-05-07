#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d;

    scanf("%d%d%d%d", &a, &b, &c, &d);

    bool possible = false;

    //A, B, C

    if(a + b > c && a + c > b && b + c > a) possible = true;

    //A, C, D

    if(a + c > d && a + d > c && d + c > a) possible = true;

    //B, C, D

    if(b + c > d && b + d > c && c + d > b) possible = true;

    //A, B, D

    if(a + b > d && a + d > b && b + d > a) possible = true;

    if(possible) printf("S\n");

    else printf("N\n");

    return 0;
}
