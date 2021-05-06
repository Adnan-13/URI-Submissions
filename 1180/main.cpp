#include <bits/stdc++.h>

using namespace std;

int main()
{
    int arraySize;

    scanf("%d", &arraySize);

    int n[arraySize];

    for(int i=0; i<arraySize; i++)
    {
        scanf("%d", &n[i]);
    }

    int minimum=n[0], minIndex=0;

    for(int i=1; i<arraySize; i++)
    {
        if(n[i]<minimum)
        {
            minimum=n[i];

            minIndex=i;
        }
    }

    printf("Menor valor: %d\n", minimum);
    printf("Posicao: %d\n", minIndex);

    return 0;
}
