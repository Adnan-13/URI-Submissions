#include <bits/stdc++.h>

using namespace std;

int main()
{
    double num, sum=0;
    int posCount=0;

    for(int i=1; i<=6; i++)
    {
        scanf("%lf", &num);

        if(num >= 0)
        {
            posCount++;

            sum+=num;
        }
    }

    printf("%d valores positivos\n", posCount);

    printf("%.1lf\n",sum/posCount);

    return 0;
}
