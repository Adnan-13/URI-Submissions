#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, posCount, negCount, evenCount, oddCount;

    posCount=negCount=evenCount=oddCount=0;

    for(int i=1; i<=5; i++)
    {
        scanf("%d", &num);

        if(num>0)
        {
            posCount++;
        }

        else if(num<0)
        {
            negCount++;
        }

        if(num%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    printf("%d valor(es) par(es)\n", evenCount);
    printf("%d valor(es) impar(es)\n", oddCount);
    printf("%d valor(es) positivo(s)\n", posCount);
    printf("%d valor(es) negativo(s)\n", negCount);

    return 0;
}
