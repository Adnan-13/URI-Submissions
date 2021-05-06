#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a,n;

    scanf("%d", &a);

    while(true)
    {
        scanf("%d", &n);
        if(n>0) break;
    }

    int sum=0;

    for(int i=1; i<=n; i++)
    {
        sum+=a++;
    }

    printf("%d\n", sum);

    return 0;
}
