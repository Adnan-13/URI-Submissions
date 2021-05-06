#include <bits/stdc++.h>

using namespace std;

int main()
{
    int matchCount, winCountInter, winCountGremio, drawCount;

    matchCount = winCountInter = winCountGremio = drawCount = 0;

    while(true)
    {
        int interGoal,  gremioGoal;

        scanf("%d%d", &interGoal, &gremioGoal);

        matchCount++;

        if(interGoal>gremioGoal)
        {
            winCountInter++;
        }

        else if(gremioGoal>interGoal)
        {
            winCountGremio++;
        }

        else if(gremioGoal==interGoal)
        {
            drawCount++;
        }

        int check;

        printf("Novo grenal (1-sim 2-nao)\n");

        scanf("%d", &check);

        if(check==2)
        {
            break;
        }
    }

    printf("%d grenais\n", matchCount);
    printf("Inter:%d\n", winCountInter);
    printf("Gremio:%d\n", winCountGremio);
    printf("Empates:%d\n", drawCount);

    if(winCountInter>winCountGremio)
    {
        printf("Inter venceu mais\n");
    }

    else if(winCountGremio>winCountInter)
    {
        printf("Gremio venceu mais\n");
    }

    else
    {
        printf("Não houve vencedor\n");
    }

    return 0;
}
