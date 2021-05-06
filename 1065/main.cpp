#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, posCount=0;

    for(int i=1; i<=5; i++)
    {
        scanf("%d", &num);

        if(num%2==0)
        {
            posCount++;
        }
    }

    printf("%d valores pares\n",posCount);

    return 0;
}
