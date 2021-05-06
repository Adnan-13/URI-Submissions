#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[2];

    scanf("%d%d", &a[0], &a[1]);

    sort(a, a+2);

    int sum=0;

    for(int i=a[0]+1; i<a[1]; i++)
    {
        if(i%2!=0)
        {
            sum+=i;
        }
    }

    printf("%d\n", sum);

    return 0;
}
