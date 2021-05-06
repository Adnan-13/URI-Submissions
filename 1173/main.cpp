#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n[10];

    int num;

    scanf("%d", &num);

    for(int i=0; i<10; i++)
    {
        n[i]=num;

        num*=2;
    }

    for(int i=0; i<10; i++)
    {
        printf("N[%d] = %d\n", i, n[i]);
    }

    return 0;
}
