#include <bits/stdc++.h>

using namespace std;

int main()
{
    while(true)
    {
        double score1, score2;

        while(true)
        {
            scanf("%lf", &score1);

            if(score1>=0 && score1<=10)
            {
                break;
            }

            printf("nota invalida\n");
        }

        while(true)
        {
            scanf("%lf", &score2);

            if(score2>=0 && score2<=10)
            {
                break;
            }

            printf("nota invalida\n");
        }

        printf("media = %.2lf\n", (score1+score2)/2);

        printf("novo calculo (1-sim 2-nao)\n");

        int check;

        while(true)
        {
            scanf("%d", &check);
            if(check==1 || check==2)
            {
                break;
            }
            printf("novo calculo (1-sim 2-nao)\n");
        }

        if(check==2)
        {
            break;
        }
    }
    return 0;
}
