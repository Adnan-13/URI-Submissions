#include <bits/stdc++.h>

using namespace std;

int main()
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

    printf("media = %.2lf", (score1+score2)/2);

    return 0;
}
