#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    scanf("%d", &n);

    if(n==0)
    {
        return 0;
    }

    if(n==1)
    {
        printf("0\n");
        return 0;
    }

    if(n==2)
    {
        printf("0 1\n");
        return 0;
    }

    int n1=0, n2=1;

    printf("%d %d", n1, n2);

    for(int i=3; i<=n; i++)
    {
        int n3=n1+n2;

        printf(" %d", n3);

        n1=n2;
        n2=n3;

    }

    printf("\n");

    return 0;
}
