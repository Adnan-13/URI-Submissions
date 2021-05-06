#include <bits/stdc++.h>

using namespace std;

int main()
{
    double num;
    int posCount=0;

    for(int i=1; i<=6; i++)
    {
        scanf("%lf",&num);
        if(num >= 0)
        {
            posCount++;
        }
    }

    printf("%d valores positivos\n", posCount);

    return 0;
}
